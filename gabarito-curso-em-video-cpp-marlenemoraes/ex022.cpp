/*
  22) Escreva um programa que leia o ano de nascimento de um rapaz 
    e mostre a sua situação em relação ao alistamento militar.
    	- Se estiver antes dos 18 anos, mostre em quantos anos 
    	faltam para o alistamento.
        - Se já tiver depois dos 18 anos, mostre quantos anos 
        já se passaram do alistamento.
*/

#include <iostream>

using namespace std;

int main() {
  int birth_year, age, years;

  cout << "Alistamento" << endl;
  cout << "Ano de Nascimento: ";
  cin >> birth_year;

  age = 2023 - birth_year; // simplificado para fins didáticos

  if (age < 18) {
    years = 18 - age;
    cout << "Faltam " << years << " para o alistamento.";
  } else if (age > 18) {
    years = age - 18;
    cout << "Já se passaram " << years << " para o alistamento.";
  } else {
    cout << "Está na hora de você se alistar!";
  }

  return 0;
}
