/*
  29) Desenvolva um programa que leia o nome de um funcionário, seu salário, 
    quantos anos ele trabalha na empresa e mostre seu novo salário, reajustado de
    acordo com a tabela a seguir:
        - Até 3 anos de empresa: aumento de 3%
        - entre 3 e 10 anos: aumento de 12.5%
        - 10 anos ou mais: aumento de 20%
*/

#include <iostream>

using namespace std;

int main() {
  string name;
  int years;
  float salary;

  cout << "REAJUSTE" << endl;
  cout << "Nome do funcionário: ";
  cin >> name;

  cout << "Salário atual: ";
  cin >> salary;

  cout << "Tempo de casa: ";
  cin >> years;

  if (years < 3) 
    salary += (salary * 0.03);
  else if (years < 10) 
    salary += (salary * 0.125);
  else 
    salary += (salary * 0.2);

  cout.precision(3);
  cout << name << ", você terá reajuste de R$" << salary << endl;

  return 0;
}