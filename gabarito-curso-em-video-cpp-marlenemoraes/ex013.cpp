/*
	13) Faça um algoritmo que leia o salário de um funcionário, 
	calcule e mostre o seu novo salário, com 15% de aumento.
*/


#include <iostream>

using namespace std;

int main() {
  float salary;

  cout << "Salário atual: ";
  cin >> salary;

  salary += (salary * 0.15);

  cout.precision(3);
  cout << "Seu novo salário é R$" << salary << "." << endl;
  
  return 0;
}