/*
  19) Crie um algoritmo que leia o nome e as duas notas de um aluno, 
  calcule a sua média e mostre na tela. No final, analise a 
  média e mostre se o aluno teve ou não um bom aproveitamento 
  (se ficou acima da média 7.0).
*/

#include <iostream>

using namespace std;

int main() {
  string name;
  float grade1, grade2, avg;

  cout << "Nome do aluno(a): ";
  cin >> name;

  cout << "Nota 1º semestre: ";
  cin >> grade1;

  cout << "Nota 2º semestre: ";
  cin >> grade2;
  
  avg = (grade1 + grade2) / 2;
  
  cout.precision(2);
  if (avg >= 7){
    cout << name << " teve bom aproveitamento " << endl;
    cout << "Média: " << avg << endl;
  } else {
    cout << name << " não teve bom aproveitamento " << endl;
    cout << "Média: " << avg << endl;
  }

  return 0;
}