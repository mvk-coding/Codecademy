#include <iostream>
#include <stdlib.h>
 
int main() {
 
  // Live long and prosper

  srand (time(NULL));
 
  int computer = rand() % 3 + 1;
 
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
 
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
 
  std::cout << "shoot! ";

  std::cin >> user;

  if (user == 1)
    std::cout << "you choose: ✊\n";
  else if (user == 2)
    std::cout << "you choose: ✋\n";
  else
    std::cout << "you choose: ✌️\n";

  if (computer == 1)
    std::cout << "cpu choose: ✊\n";
  else if (computer == 2)
    std::cout << "cpu choose: ✋\n";
  else
    std::cout << "cpu choose: ✌️\n";

    std::string win = "You won :)";
    std::string lost = "You lost :(";
    std::string pr = "Paper covers Rock. ";
    std::string rs = "Rock crushes Scissors. ";
    std::string sp = "Scissors cuts Paper. ";

  if(user == computer) {
    std::cout << "You choose the same weapon. It's a tie\n";
  } else if ( user == 1 && computer == 2) {
    std::cout << pr << lost <<"\n";
  } else if ( user == 1 && computer == 3) {
    std::cout << rs << win <<"\n";
  } else if ( user == 2 && computer == 3) {
    std::cout << sp << lost <<"\n";
  } else if ( user == 2 && computer == 1) {
    std::cout << pr << win <<"\n";
  } else if ( user == 3 && computer == 1) {
    std::cout << rs << lost <<"\n";
  } else if ( user == 3 && computer == 2) {
    std::cout << sp << win <<"\n";
  }
 
}
