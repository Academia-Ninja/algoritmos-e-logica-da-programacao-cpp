/*
  74) Crie um programa que preencha automaticamente (usando lógica, não apenas
    atribuindo diretamente) um vetor numérico com 10 posições, conforme abaixo:
      5 3 5 3 5 3 5 3 5 3
      0 1 2 3 4 5 6 7 8 9
 */

#include <iostream>

using namespace std;

int main() {
  int vetor[10];

  for (int i = 0; i <= 9; i++) {
    if (i % 2 == 0)
      vetor[i] = 5;
    else
      vetor[i] = 3;

    cout << vetor[i] << " ";
  }

  for (int i = 0; i <= 9; i++) {
    vetor[i] = i;

    if (i == 0)
      cout << endl;

    cout << vetor[i] << " ";
  }

  cout << endl;

  return 0;
}