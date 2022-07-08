/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
 
int main() {
 
  // Live long and prosper

  srand (time(NULL));
 
  int computer = rand() % 5 + 1;
 
  int user = 0;

  std::cout << "=================================\n";
  std::cout << "rock paper scissors lizard spock!\n";
  std::cout << "=================================\n";
 
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🤏\n";
  std::cout << "5) 🖖\n";
 
  std::cout << "shoot! ";

  std::cin >> user;

  if (user == 1) {
    std::cout << "you choose: ✊\n";
  } else if (user == 2) { 
    std::cout << "you choose: ✋\n";
  } else if (user == 3) {
    std::cout << "you choose: ✌️\n";
  } else if (user == 4) {
    std::cout << "you choose: 🤏\n";
  } else if ( user == 5 ) { 
    std::cout << "you choose: 🖖\n";
  } else {
    std::cout << "invalid input \n";
    return 0;
  }

  if (computer == 1) {
    std::cout << "cpu choose: ✊\n";
  } else if (computer == 2) { 
    std::cout << "cpu choose: ✋\n";
  } else if (computer == 3) {
    std::cout << "cpu choose: ✌️\n";
  } else if (computer == 4) {
    std::cout << "cpu choose: 🤏\n";
  } else if (computer == 5 ) { 
    std::cout << "cpu choose: 🖖\n";
  }
  
  //storing the messages
  std::vector<std::string> messages;
  messages.push_back("It's a tie"); //0
  messages.push_back("You won :)"); //1
  messages.push_back("You lost :("); //2
  messages.push_back("Scissors cuts Paper. "); //3
  messages.push_back("Paper covers Rock. "); //4
  messages.push_back("Rock crushes Lizard. "); //5
  messages.push_back("Lizard poisons Spock."); //6
  messages.push_back("Spock smashes Scissors."); //7
  messages.push_back("Scissors decapitate Lizard."); //8
  messages.push_back("Lizard eats Paper. "); //9
  messages.push_back("Paper disproves Spock. "); //10
  messages.push_back("Spock vaporizes Rock. "); //11
  messages.push_back("Rock crushes Scissors. "); //12

  //printing the right message
  
  //tie
  if(user == computer) {
    std::cout << messages[0] <<"\n";
  // user rock
  // ----------cpu paper
  } else if ( user == 1 && computer == 2) {
    std::cout << messages[4] << messages[2] <<"\n";
  // ----------cpu scissors
  } else if ( user == 1 && computer == 3) {
    std::cout << messages[12] << messages[1] <<"\n";
  // ----------cpu lizard
  } else if ( user == 1 && computer == 4) {
    std::cout << messages[5] << messages[1] <<"\n";
  // ----------cpu spock
  } else if ( user == 1 && computer == 5) {
    std::cout << messages[11] << messages[2] <<"\n";
  
  // user paper
  // ----------cpu scissors
  } else if ( user == 2 && computer == 3) {
    std::cout << messages[3] << messages[2] <<"\n";
  // ----------cpu rock
  } else if ( user == 2 && computer == 1) {
    std::cout << messages[4] << messages[1] <<"\n";
  // ----------cpu lizard
  } else if ( user == 2 && computer == 4) {
    std::cout << messages[9] << messages[2] <<"\n";
  // ----------cpu spock
  } else if ( user == 2 && computer == 5) {
    std::cout << messages[10] << messages[1] <<"\n";

  // user scissors
  // ----------cpu rock
  } else if ( user == 3 && computer == 1) {
    std::cout << messages[12] << messages[2] <<"\n";
  // ----------cpu paper
  } else if ( user == 3 && computer == 2) {
    std::cout << messages[3] << messages[1] <<"\n";
  // ----------cpu lizard
  } else if ( user == 3 && computer == 4) {
    std::cout << messages[8] << messages[1] <<"\n";
  // ----------cpu spock
  } else if ( user == 3 && computer == 5) {
    std::cout << messages[7] << messages[2] <<"\n";

  // user lizard
  // ----------cpu rock
  } else if ( user == 4 && computer == 1) {
    std::cout << messages[5] << messages[2] <<"\n";
  // ----------cpu paper
  } else if ( user == 4 && computer == 2) {
    std::cout << messages[9] << messages[1] <<"\n";
  // ----------cpu scissors
  } else if ( user == 4 && computer == 3) {
    std::cout << messages[8] << messages[2] <<"\n";
  // ----------cpu spock
  } else if ( user == 4 && computer == 5) {
    std::cout << messages[6] << messages[1] <<"\n";

  // user spock
  // ----------cpu rock
  } else if ( user == 5 && computer == 1) {
    std::cout << messages[11] << messages[1] <<"\n";
  // ----------cpu paper
  } else if ( user == 5 && computer == 2) {
    std::cout << messages[10] << messages[2] <<"\n";
  // ----------cpu scissors
  } else if ( user == 5 && computer == 3) {
    std::cout << messages[7] << messages[1] <<"\n";
  // ----------cpu lizard
  } else if ( user == 5 && computer == 4) {
    std::cout << messages[6] << messages[2] <<"\n";
  }
 
}
