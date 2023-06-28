/*
  15) Crie um programa que leia o número de dias trabalhados em um mês
  e mostre o salário de um funcionário, sabendo que ele trabalha 8
  horas por dia e ganha R$25 por hora trabalhada.
*/

#include <iostream>

using namespace std;

int main() {
  float salary;
  int days;

  cout << "Número de dias trabalhados no mês: ";
  cin >> days;

  salary = days * 25 * 8;

  cout.precision(3);
  cout << "O funcionário receberá R$" << salary << "." << endl;

  return 0;
}