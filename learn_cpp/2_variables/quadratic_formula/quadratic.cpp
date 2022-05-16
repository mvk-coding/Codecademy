#include <iostream>
#include <cmath>

int main() {
  
 std::cout << "Let's solve an quadratic equation together! \n";
 
  //declare the needed variables
  double a, b, c, leftX, rightX;
  
  //to store a
  std::cout << "Enter a: ";
  std::cin >> a;

  //to store b
  std::cout << "Enter b: ";
  std::cin >> b;
 
  //to store c
  std::cout << "Enter c: ";
  std::cin >> c;
 
  //calculating both results
  leftX = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);
  rightX = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);

  //showing the result
  std::cout << "The lower value for x is " << leftX <<"\n";
  std::cout << "The higher value for x is " << rightX <<"\n";
}
