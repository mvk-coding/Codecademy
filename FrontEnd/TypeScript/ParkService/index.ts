import {
    RaccoonMeadowsVolunteers,
    RaccoonMeadowsActivity,
    raccoonMeadowsVolunteers,
  } from './raccoon-meadows-log';
  
  import {
    WolfPointVolunteers,
    WolfPointActivity,
    wolfPointVolunteers,
  } from './wolf-point-log';
  
  type CombinedActivity = RaccoonMeadowsActivity | WolfPointActivity;
  
  type Volunteers = {
    id: number;
    name: string;
    activities: CombinedActivity[];
  };
  
   /**
   * To make a combined list of the  volunteer data that fits the
   * volunteers type 
   * 
   * @param volunteers array of volunteer data that needs to 
   *                   be formatted.
   * @returns          array of data with volunteer type
   */
  function combineVolunteers(
    volunteers: (RaccoonMeadowsVolunteers | WolfPointVolunteers)[] ) { 
    return volunteers.map(volunteer =>{
      let id = volunteer.id;
      if (typeof id === 'string'){
        id = parseInt(id, 10);
      }
      return {
        id: id,
        name: volunteer.name,
        activities: volunteer.activities
      }
    })
  }
  
  /**
   * To change the type of verified to a bolean if it is not 
   * 
   * @param verified the value to change. Only the string 'Yes'
   *                 is replaced by the boolean true, other strings
   *                 are set to the boolean value false.
   * @returns       the boolean value of verified
   */
  function isVerified(verified: string|boolean){
    if (typeof verified === 'string'){
      return verified === 'Yes' ? true : false;
    }
    return verified;
  }
  
  /**
   * To return the hours a certain activity cost.
   * 
   * @param activity the activity of which the hours need to
   *                 be returned. They are listed under either 
   *                 the 'hours' or the 'time' key.
   * @returns       the value of either the 'hours' or 'time' key
   */
  function getHours(activity: CombinedActivity){ 
    if ('hours' in activity){
      return activity.hours;
    } else {
      return activity.time;
    }
  }
  

  /**
   * Calculates the total number of hours spend on activities
   * per volunteer. It loops trhough the list of volunteers
   * and adds the hours of the activities done by that volunteer.
   * 
   * @param volunteers the list of volunteers
   * @returns an array of the list of volunteer with the 
   *            id, name and hours per volunteer.
   */
  function calculateHours(volunteers: Volunteers[]) {
    return volunteers.map((volunteer) => {
      let hours = 0;
  
      volunteer.activities.forEach((activity) => {
        if(isVerified(activity.verified)){
          hours += getHours(activity);
        }
      });
  
      return {
        id: volunteer.id,
        name: volunteer.name,
        hours: hours,
      };
    });
  }
  

  /**
   * A function to use in conjunction with the sort function
   * to sort the volunteers based on the highest number
   * of hours spend.
   * 
   * @param a the number of hours spend by one volunteer
   * @param b the number of hours spend by another volunteer
   * @returns a positive value if the second volunteer spend
   *          more hours, or a negative value if the first
   *          volunteer spend more hours. If they spend the 
   *          same amount the return will be 0
   */
  function byHours(a,b){
    return b.hours - a.hours;
  }
  
  const combinedVolunteers = combineVolunteers(
    [].concat(wolfPointVolunteers, raccoonMeadowsVolunteers)
  );
  const result = calculateHours(combinedVolunteers);
  
  // test
  // log a list of volunteers based on who spend the most verified
  // hours.
  console.log(result.sort(byHours));