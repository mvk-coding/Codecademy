#include <iostream>

int main() {
  
  std::cout << "Warning! only accurate calculations if your dog is older than 2 years!\n"
  
  //ask for name of dog
  std::string dog_name;
  std::cout << "The name of my dog is: ";
  std::cin >> dog_name;
  
  //ask for age of dog
  double dog_age;
  std::cout << "The age of my dog in years is: ";
  std::cin >> dog_age;

  //declare needed variables
  int early_years;
  int later_years; 
  int human_years;

  //first 2 years count as 21 human years
  early_years = 21;
  
  //every year after that counts as 4 human years
  later_years = (dog_age - 2) * 4;
    
  human_years = early_years + later_years;

  //display message with calculated age
  std::cout << "My name is "<< dog_name <<"! Ruff ruff, I am " << human_years << " years old in human years.\n";

}
