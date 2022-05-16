#include <iostream>

int main() {
  
  double pesos, reais, soles, usd;
  
  //get amount of Pesos
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  
  //get amount of Reais
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  
  //get amount of Soles
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  // Rates from 18-12-2020
  // Pesos conversion rate: 
  double pesos_to_usd = 0.00029;
  // Reais conversion rate: 
  double reais_to_usd = 0.20;
  // Soles conversion rate: 
  double soles_to_usd = 0.28;

  //calculate usd
  usd = (pesos_to_usd * pesos) + (reais_to_usd * reais) +(soles_to_usd * soles);

  //show result
  std::cout << "Total USD = $" << usd << "\n";

}
