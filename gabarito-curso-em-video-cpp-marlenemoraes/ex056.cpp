/*
	56) Crie um programa que leia vários números pelo teclado e mostre no final o somatório entre eles.
    Obs: O programa será interrompido quando o número 1111 for digitado
*/

#include <iostream>

using namespace std;

int main() {
  int sum = 0;
  int number = 0;

  cout << "Somatório entre os números" << endl;
  
  while (number != 1111) {
    cout << "Digite um número: ";
    cin >> number;

    if (number != 1111) {
      sum += number;
    }
  }

  cout << "Soma dos valores: " << sum << endl;

  return 0;
}