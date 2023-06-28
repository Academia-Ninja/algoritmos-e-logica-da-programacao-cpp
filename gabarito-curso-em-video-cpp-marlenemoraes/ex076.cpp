/*
    76) Crie um programa que preencha automaticamente um vetor numérico com 7
    números gerados aleatoriamente pelo computador e depois mostre os valores
    gerados na tela.
 */

#include <iostream>

using namespace std;

int main() {
  int vetor[7];

  for (int i = 0; i <= 6; i++) {
    vetor[i] = rand() % 100;
    cout << vetor[i] << " ";
	}

  cout << endl;

  return 0;
}