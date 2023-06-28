/*
  21) Faça um algoritmo que leia um determinado ano 
	e mostre se ele é ou não BISSEXTO.
*/

#include <iostream>

using namespace std;

int main() {
  int year;

  cout << "Bissexto ou não-bissexto?" << endl;
  cout << "Ano: ";
  cin >> year;

  if (year % 4 == 0) {
    if (year % 100 != 0) 
      cout << "Ano bissexto." << endl;
  } else 
    cout << "Ano não-bissexto." << endl;

  return 0;
}
