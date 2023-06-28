/*
  5) Faça um programa que leia as duas notas de um aluno em uma matéria
  e mostre na tela a sua média na disciplina.
  Ex:
      Nota 1: 4.5
      Nota 2: 8.5
  A média entre 4.5 e 8.5 é igual a 6.5
*/

#include <iostream>

using namespace std;

int main() {
  float grade1 = 0;
  float grade2 = 0;
  float avg = 0;

  cout << "Nota 1: ";
  cin >> grade1;

  cout << "Nota 2: ";
  cin >> grade2;

  avg = (grade1 + grade2) / 2;

  cout.precision(2);
  cout << "A média entre " << grade1 << " e " << grade2 << " é igual a " << avg
       << ".";

  return 0;
}