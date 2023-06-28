/*
  3) Crie um programa que leia o nome e o salário de um funcionário, mostrando
  no final uma mensagem. Ex: Nome do Funcionário: Maria do Carmo Salário:
  1850,45 O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.
*/

#include <iostream>

using namespace std;

int main() {
  string name;
  double salary;

  cout << "Nome do Funcionário: ";
  cin >> name;

  cout << "Salário: ";
  cin >> salary;

  cout << "O funcionário " << name << " tem um salário de " << salary
       << " em Junho.";

  return 0;
}