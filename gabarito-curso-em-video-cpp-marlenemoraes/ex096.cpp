/*
  96) Crie um programa que tenha uma função Media(), que vai receber as 2 notas de
    um aluno e retornar a sua média para o programa principal.
 */

#include <iostream>

using namespace std;

float media(float n1, float n2) {
		return ((n1 + n2) / 2);
}  

int main() {
  float grade1;
  float grade2;

  cout << "MÉDIA DE NOTAS" << endl;
  cout << "Digite a primeira nota: ";
  cin >> grade1;

  cout << "Digite a segunda nota: ";
  cin >> grade2;

  float avg = media(grade1, grade2);

  cout << "Média: " << avg << endl;
  
  return 0;
}