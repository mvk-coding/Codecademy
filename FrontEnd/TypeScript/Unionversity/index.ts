import courses from './courses';
import studyGroups from './studyGroups'; 

// Types
type Course = {
  id: number;
  studyGroupId: number;
  title: string;
  keywords: string[];
  eventType: string;
}

type StudyGroup = {
  id: number;
  courseId: number;
  title: string;
  keywords: string[];
  eventType: string;
}

type SearchEventOptions = {
  query: number|string;
  eventType: 'courses' | 'groups';
}

// Variables
let searchOption: SearchEventOptions = {
  query: 'art',
  eventType: 'groups'
}

let searchResults: (Course|StudyGroup)[] = [];

let enrolledEvents: (Course|StudyGroup)[] = [];

// Functions
/**
 * Filter events based on search criteria
 * The criteria are combined in the type 
 * SearchEventOptions and consist of a query with a 
 * id number or a string keyword. The eventype states to
 * search in the list of courses or (study)group.
 * 
 * @options: search criteria
 * @return: list of courses or sturygroups that fit the 
 * criteria
 */
function searchEvents(options: SearchEventOptions) {
  const events: (Course|StudyGroup)[] = options.eventType === 'courses' ? courses : studyGroups;
  return events.filter((event: Course|StudyGroup) => {
    if(typeof options.query === 'number'){
      return options.query === event.id;
    } else if(typeof options.query === 'string'){
      return event.keywords.includes(options.query);
    }
  })
}

function enroll(event: Course|StudyGroup) {
  enrolledEvents = [...enrolledEvents, event]
}

// Function calls and results

// Testing  searchEvents()
searchResults = searchEvents(searchOption);
console.log('searchResults');
console.log(searchResults);

// Enrolling in course
enroll(searchResults[0]);
console.log('enrolledEvents');
console.log(enrolledEvents);








