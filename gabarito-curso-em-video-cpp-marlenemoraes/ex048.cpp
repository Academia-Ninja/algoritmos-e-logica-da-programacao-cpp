/*
	48) Faça um programa que leia 7 números inteiros e no final mostre o somatório entre eles.
 */

#include <iostream>

using namespace std;

int main() {
  int sum = 0;
  int count = 1;
  int value;
      
  while (count <= 7) {
    cout << "Digite um número inteiro: ";  
    cin >> value;
            
    sum += value;
    count++;
  }

  cout << "A soma dos valores é " << sum << "." << endl;

  return 0;
}