#include <iostream>

int main() {
  
  //to store the input of the weight on earth
  double earth_weight;
  std::cout << "Please enter your current weight on earth:\n";
  std::cin >> earth_weight;  

  //give a list of planets
  std::cout << "This are the planets to choose from:\n";
  std::cout << "1. Mercury\n";
  std::cout << "2. Venus\n";
  std::cout << "3. Mars\n";
  std::cout << "4. Jupiter\n";
  std::cout << "5. Saturn\n";
  std::cout << "6. Uranusy\n";
  std::cout << "7. Neptune\n";
  
  //to store the input of the chosen planet
  int x;
  std::cout << "Enter the number of the planet you are visiting:\n"; 
  std::cin >> x;

  double conversion_rate;
  
  //check which planet is chosen and store the correct conversion rate
  switch(x) {
    
    case 1:
      conversion_rate = 0.38;
      break;
    case 2:
      conversion_rate = 0.91;
      break;
    case 3:
      conversion_rate = 0.38;
      break;
    case 4:
      conversion_rate = 2.34;
      break;
    case 5:
      conversion_rate = 1.06;
      break;
    case 6:
      conversion_rate = 0.92;
      break;
    case 7:
      conversion_rate = 1.19;
      break;
    default: 
      std::cout << "Not a valid option.";
  }
  
  //calculate weight on chosen planet
  double weight = earth_weight * conversion_rate;

  //
  if(conversion_rate) {
    std::cout << "Your weight is: " << weight << "\n";
  }
    
}
