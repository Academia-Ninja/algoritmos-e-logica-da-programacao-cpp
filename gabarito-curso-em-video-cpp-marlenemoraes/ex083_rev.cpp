/*
    83)[DESAFIO] Crie uma lógica que preencha um vetor de 20 posições 
    com números aleatórios (entre 0 e 99) gerados pelo computador.
    Logo em seguida, mostre os números gerados e depois coloque o 
    vetor em ordem crescente, mostrando no final os valores ordenados.
 */

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int random[20];
  int length = sizeof(random) / sizeof(random[0]);

  for (int i = 0; i <= length; i++) {
    random[i] = rand() % 99;
    cout << random[i];
  }

  // Ordenação dos valores
  sort(random, random + length);  // revisar

  cout << endl << "----------------------------------------------------------" << endl;
  cout << "NÚMEROS ORDENADOS" << endl;
  
  for (int i = 0; i < 20; i++) {
    cout << random[i] << " ";
  }
  
  return 0;
}