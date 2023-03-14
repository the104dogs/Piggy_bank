#include <iostream>

int main() {
  double pesos = 0;
  double reais = 0;
  double soles = 0;
  double dollars = 0;

std::cout << "Enter number of Colombian pesos: " << std::endl;
std::cin >> pesos;

std::cout << "Enter number of Brazilian Reais: " << std::endl;
std::cin >> reais;

std::cout << "Enter number of Peruvian Soles: " << std::endl;
std::cin >> soles;
  // pesos= 55.71 reais=5.32 soles=3.84
double conversion_a = 0.00032;
double conversion_b = 0.27;
double conversion_c = 0.3;



dollars = (conversion_a * pesos) + (conversion_b * reais) + (conversion_c * soles);

std::cout << "US Dollars = $" << dollars << std::endl;
}