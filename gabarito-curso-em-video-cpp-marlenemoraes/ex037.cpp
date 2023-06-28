/*
  37) Uma empresa precisa reajustar o salário dos seus funcionários, 
    dando um aumento de acordo com alguns fatores. Faça um programa 
    que leia o salário atual, o gênero do funcionário e há quantos 
    years esse funcionário trabalha na empresa. No final, mostre o 
    seu novo salário, baseado na tabela a seguir:
    - Mulheres
        - menos de 15 years de empresa: +5%
        - de 15 até 20 years de empresa: +12%
        - mais de 20 years de empresa: +23%
    - Homens
        - menos de 20 years de empresa: +3%
        - de 20 até 30 years de empresa: +13%
        - mais de 30 years de empresa: +25%
*/

#include <iostream>

using namespace std;

int main() {
  char gender;
  float salary;
  int years;

  cout << "Gênero (F/M): ";
  cin >> gender;

  cout << "Salário atual: ";
  cin >> salary;

  cout << "Tempo de casa: ";
  cin >> years;

  switch (gender) {
  case 'F':
    if (years < 15)
      salary += (salary * 0.05);
    else if (years <= 20) 
      salary += (salary * 0.12);
    else 
      salary += (salary * 0.23);
    break;
  case 'M':
    if (years < 20)
      salary += (salary * 0.03);
    else if (years <= 30)
      salary += (salary * 0.13);
    else
      salary += (salary * 0.25);
    break;
  }

  cout.precision(3);
  cout << "Você receberá R$" << salary << endl;
  
  return 0;
}