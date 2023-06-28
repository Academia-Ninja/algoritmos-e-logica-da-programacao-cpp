/*
  4) Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório entre eles.
  Ex:
      Digite um valor: 8
      Digite outro valor: 5
      A soma entre 8 e 5 é igual a 13.
 */

#include <iostream>

using namespace std;

int main() {
  int value1 = 0;
  int value2 = 0;
  int sum = 0;

  cout << "Digite um valor: ";
  cin >> value1;

  cout << "Digite um valor: ";
  cin >> value2;
    
  sum = value1 + value2;
  
  cout << "A soma entre " << value1 << " e " << value2 << " é igual a " << sum << ".";

  return 0;
}