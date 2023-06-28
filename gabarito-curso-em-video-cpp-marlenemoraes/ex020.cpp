/*
  20) Desenvolva um programa que leia um número inteiro 
	e mostre se ele é PAR ou ÍMPAR.
*/

#include <iostream>

using namespace std;

int main() {
  int value;

  cout << "Par ou ímpar?" << endl;
  cout << "Digite um valor: ";
  cin >> value;

  if (value % 2 == 0)
    cout << value << " é par." << endl;
  else 
    cout << value << " é ímpar." << endl;

  return 0;
}