#include <iostream>
#include <cmath>

int main() {
  
 std::cout << "Let's solve an quadratic equation together! \n";
 
  //variables to store input and discriminant
  double a, b, c, d;
  
  //to store a
  std::cout << "Enter a: ";
  std::cin >> a;

  //check or a has a value
  if(a != 0) {
    //to store b
    std::cout << "Enter b: ";
    std::cin >> b;
  
    //to store c
    std::cout << "Enter c: ";
    std::cin >> c;

    //calculating discriminant
    d = b*b - 4*a*c;

    //check how many values x has
    if ( d < 0) {
      std::cout << "There is no value for x\n";
    } else if(d == 0) {
      double x;
      x = (-b ) / (2*a);
      std::cout << "The value for x is " << x << "\n";
    } else {
      //variables to store both values of X
      double leftX, rightX;

      //calculating both results
      leftX = (-b - std::sqrt(d)) / (2*a);
      rightX = (-b + std::sqrt(d)) / (2*a);

      //showing the result
      std::cout << "The lower value for x is " << leftX <<"\n";
      std::cout << "The higher value for x is " << rightX <<"\n";
    }
 
  } else {
    std::cout << "This is not a quadratic equation! \n";
  }  
  
}
