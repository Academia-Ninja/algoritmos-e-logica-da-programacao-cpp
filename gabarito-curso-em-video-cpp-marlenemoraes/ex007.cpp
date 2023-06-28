/*
  7) Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a sua terça parte.
  Ex:
      Digite um número: 3.5
      O dobro de 3.5 é 7.0
      A terça parte de 3.5 é 1.16666
 */
#include <iostream>

using namespace std;

int main() {
  float number;

  cout << "Digite um número: ";
  cin >> number;

  cout << "O dobro de " << number << " é " << (number * 2) << endl;
  cout << "A terça parte de " << number << " é " << (number/3) << endl;
  
  return 0;
}