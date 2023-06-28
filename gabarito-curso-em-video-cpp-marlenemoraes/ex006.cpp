/*
 6) Faça um programa que leia um número inteiro e mostre o seu antecessor e seu
 sucessor. Ex: Digite um número: 9 O antecessor de 9 é 8 O sucessor de 9 é 10
*/

#include <iostream>

using namespace std;

int main() {
  int number;

  cout << "Digite um número: ";
  cin >> number;

  cout << "O antecessor de " << number << " é " << (number - 1) << endl;
  cout << "O sucessor de " << number << " é " << (number + 1) << endl;

  return 0;
}