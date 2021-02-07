//This is just a start, in time it will be improved and extended.

//WIP: Not entirely tested for bugs yet. 

#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
 
int main() {

  int firstChoice = 0;
  int secondChoice = 0;
  int thirdChoice = 0;
  double pocketMoney = 0.23;
  bool hungry = true;
  bool thirsty = true;
  bool tired = true;
  bool cold = true;
  string server = "";

  std::cout << "After a long day of travelling, you finally reach a tavern. The merry music flows through the door and the smell of a well seasoned stew enters your nose. The growl of your stumach reminds you that you have no choice but to enter. \n";
  std::cout << "Once inside you see only a few people: the inkeeper, a barmaid, the bard and a man at the bar. As soons as you enter the innkeeper looks up from his task of cleaning the glasses and greets you: 'Welcome traveller, take a seat!' \n";
  std::cout << "Where do you want to sit? \n";
  std::cout << "1. At a table \n";
  std::cout << "2. At the bar \n";
  
  while (!(firstChoice == 1 || firstChoice == 2)) {
    std::cout << "Pick an option: \n";
    std::cin >> firstChoice;
  }

  if(firstChoice == 1) {
    std::cout << "There is more then enough room, so you pick a random table. The furniture seems cleaner, than at other inn's you've encountered along the way. Not long after you sit down the barmaids greets you. 'Can I offer you something to drink? Maybe a meal with it?' she asks. \n";
    server = "barmaid";
  } else if(firstChoice == 2) {
    std::cout << "While sitting down, you notice the bar not being sticky or greasy. That is a welcome surprise. Not long after you sit down the innkeeper greets you. 'Can I offer you something to drink? Maybe a meal with it?' he asks. \n";
    server = "innkeeper";
  }

  std::cout << "You feel around in your pockets, they feel emptier than you would like. You have "<< to_string(int (pocketMoney) % 10) <<" gold coins, " << to_string(int (pocketMoney * 10) % 10) << " silver coins, and " << to_string(int (pocketMoney * 100) % 10) << " copper coins, enough you hope for both a drink and a meal, though that would depend on the prices here. You once more glance around, it is too clean to be cheap... And you still have to find a place to sleep tonight. \n";

  std::cout << "What do you want to order? \n";
  std::cout << "1. Nothing \n";
  std::cout << "2. Just a drink \n";
  std::cout << "3. Just a meal \n";
  std::cout << "4. Both \n";
  
  while (secondChoice < 1 || secondChoice > 4) {
    std::cout << "Pick an option: \n";
    std::cin >> secondChoice;
  }

  switch(secondChoice) {
    case 1:
      std::cout << "Though you feel like you could use a good meal and drink, you are too afraid that you can't afford it. It feels strange to sit here without ordering, but hopefully " << server << " doesn't mind too much that you try to escape the cold outside for a bit. \n";
      break;
    case 2:
      std::cout << "'Just a drink is fine,' you say, ignoring the sounds your stomachs makes. A good beer should fill you up a bit too. 'That would be a copper,' the " << server << " states, while handing you a full glass of brew. \n";
      thirsty = false;
      pocketMoney -= 0.01;
      break;
    case 3:
      std::cout << "'Just a meal is fine,' you say, ignoring the rasp in your throat. A good stew should quench your thirst too, you hope. 'That would be two coppers,' the " << server << " states, while handing you a plate. \n";
      hungry = false;
      pocketMoney -= 0.02;
      break;
    case 4:
      std::cout << "'Both will be nice,' you say, looking forward to finally drink and eat something decent during all your travels. 'That would be three coppers,' the " << server << " states, while handing you a steaming plate and a filled mug. \n";
      thirsty = false;
      hungry = false;
      pocketMoney -= 0.03;
      break;
    default:
      std::cout << "Something went wrong, please start over. \n";
      return 0;
  } 

  std::cout << "You take a moment to count your coins again. You have "<< to_string(int (pocketMoney) % 10) <<" gold coins, " << to_string(int (pocketMoney * 10) % 10) << " silver coins, and " << to_string(int (pocketMoney * 100) % 10) << " copper coins. 'Do you have any rooms?' you ask. \n";
  std::cout << "'Off course,' the " << server << " says. 'We have several free. You can have a bed in the shared room, only a silver a night. Or if you prefer privacy, you can have your own room foor 2 silvers.' Looking at you worried face, the " << server << " adds: or you can join the horses in the stable for half a silver. \n";
  std::cout << "Where do you want to sleep? \n";
  std::cout << "1. Outside \n";
  std::cout << "2. In the stables \n";
  std::cout << "3. In a shared room \n";
  std::cout << "4. In a private room \n";

  while (thirdChoice < 1 || thirdChoice > 4) {
    std::cout << "Pick an option: \n";
    std::cin >> secondChoice;
  }

  switch(thirdChoice) {
    case 1:
      std::cout << "'I will sleep outside,' you state. You were really looking forward to a night inside, but you know you have a too long way ahead to spend all your money here. Once outside you start looking for a good spot, finding one near the stables. It is cold, so you curl up in your blanket. It is too late to search for kindle and it doesn't really help a lot that the noises keep you awake. Still, you are getting more and more tired and finally when you close your eyes you keep them closed. Not knowing that you will never open them again. \n";
      return 0;
      break;
    case 2:
      std::cout << "'The stables are fine,' you say, paying the fee. When it is time to go to bed, you head outside, noticing the chill of the wind. Inside it is not much warmer, though you try to find the best spot. You know it will be a rough night, but at least the hay isn't as hard as the forest floor this time a year. Soon you fall asleep, knowing you will be able to afford a nice warm breakfast the next day. \n";
      tired = false;
      pocketMoney -= 0.05;
      return 0;
      break;
    case 3:
      std::cout << "'A shared room is good enough,' you say, while paying the fee. You know it will be strange to be among other people after travelling alone for so long. At least it is warm inside, wich makes up for the fact that you almost can't fall asleep, for all the noise around you. \n";
      cold = false;
      pocketMoney -= 0.1;
      return 0;
      break;
    case 4:
      std::cout << "'I prefer my own room,' you say, while paying the fee. Not long after you go upstairs to enjoy all the luxury you paid for. When you lie down in bed you notice how much you missed a proper bed. You rest assured knowing that you will be well rested when waking up tomorrow, ready for a new day of travels and adventure. \n";
      thirsty = false;
      hungry = false;
      pocketMoney -= 0.2;
      return 0;
      break;
    default:
      std::cout << "Something went wrong, please start over. \n";
      return 0;
  } 
