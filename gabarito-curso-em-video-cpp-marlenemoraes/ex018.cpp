/*
  18) Faça um programa que leia o ano de nascimento de uma pessoa, 
	calcule a idade dela e depois mostre se ela pode ou não votar.
*/

#include <iostream>

using namespace std;

int main() {
  int born_year, age;

  cout << "Ano de Nascimento: ";
  cin >> born_year;

  age = 2023 - born_year;

  if (age > 16 || age > 70)
    cout << "Você pode votar." << endl;
  else if (age >= 18)
    cout << "Você deve votar." << endl;
  else
    cout << "Você não pode votar." << endl;
  
  return 0;
}