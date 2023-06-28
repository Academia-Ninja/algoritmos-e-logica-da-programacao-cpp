/*
    78) Escreva um programa que leia 15 números e guarde-os em um vetor.
    No final, mostre o vetor inteiro na tela e em seguida mostre em que
    posições foram digitados valores que são múltiplos de 10.
 */

#include <iostream>

using namespace std;

int main() {
  int vetor[15];

  for (int i = 0; i < 15; i++) {
    cout << "Digite o " << (i+1) << "º número: ";
    cin >> vetor[i];
  }

  cout << endl << "-----------------------------------------" << endl;
  cout << "Listagem valores que são múltiplos de 10" << endl;
  cout << endl << "-----------------------------------------" << endl;

  for (int i = 0; i < 15; i++) {
    if (vetor[i] % 10 == 0) 
      cout << vetor[i] << endl;
  }

  return 0;
}