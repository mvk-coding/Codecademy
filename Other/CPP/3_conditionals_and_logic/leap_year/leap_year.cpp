#include <iostream>

int main() {
  
  int year;
  std::cout << "Let's check whether a year is a leap year.\n";
  std::cout << "Enter a year:\n";
  std::cin >> year;

  if ( year < 1000 || year > 9999) {
    std::cout << "Invalid entry\n";
  } else if ( year % 4 == 0 && !(year % 100 == 0 && year % 400 != 0)) {
    std::cout << year <<" is a leap year\n";
  } else {
    std::cout << year <<" is not a leap year\n";
  }

}
