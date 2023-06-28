/*
    77) Faça um programa que leia 7 nomes de pessoas e guarde-os em um vetor. No
    final, mostre uma listagem com todos os nomes informados, na ordem inversa
    daquela em que eles foram informados.
 */

#include <iostream>

using namespace std;

int main() {
  string vetor[7];

  for (int i = 0; i < 7; i++) {
    cout << "Digite o nome da " << (i+1) << "ª pessoa: ";
    cin >> vetor[i];
  }

  cout << endl << "-------------------" << endl;
  cout << "Listagem de nomes" << endl;
  cout << endl << "-------------------" << endl;

  for (int i = 7; i > 0; i--) {
    cout << vetor[i] << endl;
  }

  return 0;
}