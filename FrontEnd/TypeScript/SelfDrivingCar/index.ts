import { getObstacleEvents } from './computer-vision';

// Types & Interfaces
interface AutonomousCar {
  isRunning?: boolean;
  respond: (events:Events) => void;
}

interface AutonomousCarProps {
  isRunning?: boolean;
  steeringControl: Steering;
}

interface Events {
  [event: string]: boolean;
}

interface Control {
  execute: (command: string) => void;
}

interface Steering extends Control {
  turn: (direction: string) => void;
}


// Classes
class Car implements AutonomousCar {
  isRunning;
  steeringControl;

  constructor( props:AutonomousCarProps ){
    this.isRunning = props.isRunning;
    this.steeringControl = props.steeringControl;
  }

  respond ( events:Events ){
    if (!this.isRunning){
      return console.log('Car is off');
    }
    Object.keys(events).forEach(eventKey =>{
      if(!events[eventKey]){
        return 
      }
      if(eventKey == 'ObstacleLeft') {
        this.steeringControl.turn('right');
      }
      if(eventKey == 'ObstacleRight') {
        this.steeringControl.turn('left');
      }
    });
  }
}

class SteeringControl implements Steering {
  execute(command:string) {
    console.log(`Executing: ${command}`)
  }

  turn(direction:string) {
    this.execute(`turn ${direction}`)
  }
}


// Execution
const steering = new SteeringControl();
steering.turn('right');

const autonomousCar = new Car({ 
  isRunning: true, 
  steeringControl: steering });
autonomousCar.respond(getObstacleEvents());