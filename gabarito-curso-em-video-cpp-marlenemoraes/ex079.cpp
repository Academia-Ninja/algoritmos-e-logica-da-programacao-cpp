/*
    79) Desenvolva um programa que leia 10 números inteiros 
    e guarde-os em um vetor. No final, mostre quais são 
    os números pares que foram digitados e em que posições 
    eles estão armazenados.
 */

#include <iostream>

using namespace std;

int main() {
  int vetor[10];

  for (int i = 0; i < 10; i++) {
    cout << "Digite o " << (i+1) << "º número: ";
    cin >> vetor[i];
  }

  cout << endl << "----------------------------------" << endl;
  cout << "Listagem valores que são pares" << endl;
  cout << endl << "----------------------------------" << endl;

  for (int i = 0; i < 15; i++) {
    if (vetor[i] % 2 == 0) 
      cout << vetor[i] << endl;
  }

  return 0;
}