/*
  99) Faça um programa que possua uma função chamada Potencia(), que vai receber
    dois parâmetros numéricos (base e expoente) e vai calcular o resultado da
    exponenciação.
    Ex: Potencia(5,2) vai calcular 5² = 25
 */

#include <iostream>
#include <math.h>

using namespace std;

double Potencia(double b, double e) {
	return pow(b, e);
}  

int main() {
  double base;
  double exponent;

  cout << "POTENCIAÇÃO" << endl;
  cout << "Digite a base: ";
  cin >> base;

  cout << "Digite o expoente: ";
  cin >> exponent;

  double potentiation = Potencia(base, exponent);

  cout << "Potência: " << potentiation << endl;
  
  return 0;
}