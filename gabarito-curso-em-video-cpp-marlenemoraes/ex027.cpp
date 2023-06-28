/*
  27) Crie um programa que leia duas notas de um aluno e calcule a sua média,
    mostrando uma mensagem no final, de acordo com a média atingida:
    - Média até 4.9: REPROVADO
    - Média entre 5.0 e 6.9: RECUPERAÇÃO
    - Média 7.0 ou superior: APROVADO
*/

#include <iostream>

using namespace std;

int main() {
  float grade1, grade2, avg;

  cout << "BOLETIM" << endl;
  cout << "Nota 1: ";
  cin >> grade1;

  cout << "Nota 2: ";
  cin >> grade2;

  avg = (grade1 + grade2) / 2;

  if (avg <= 4.9) 
    cout << "REPROVADO" << endl;
  else if (avg >= 5 || avg <= 6.9) 
    cout << "RECUPERAÇÃO" << endl;
  else 
    cout << "APROVADO" << endl;

  return 0;
}