#include <iostream>
#include <cmath>

int main() {
  
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

  //check if dog is younger or older than 2 and make correct calculation:
  // first 2 years counts as 21 human years(10.5 per year)
  // rest counts as 4 human years per year
  if(dog_age < 2) {
    early_years = round(dog_age * 10.5);
    later_years = 0;
  } else {
    early_years = 21;
    later_years = (dog_age - 2) * 4;
  }
  
  human_years = early_years + later_years;

  //display message with calculated age
  std::cout << "My name is "<< dog_name <<"! Ruff ruff, I am " << human_years << " years old in human years.\n";

}
