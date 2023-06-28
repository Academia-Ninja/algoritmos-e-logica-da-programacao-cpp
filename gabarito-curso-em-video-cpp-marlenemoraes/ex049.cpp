/*
	49) Crie um programa que leia 6 números inteiros e no final 
	mostre quantos deles são pares e quantos são ímpares.
 */

#include <iostream>

using namespace std;

int main() {
  int even = 0;
  int odd = 0;
  int count = 1;
  int value;

  while (count <= 6) {
    cout << "Digite um número inteiro: ";  
    cin >> value;
            
    if (value % 2 == 0) 
      even++;
    else 
      odd++;

			count++;
  }

  cout << "Quantidade de pares: " << even << "." << endl;
  cout << "Quantidade de ímpares: " << odd << "." << endl;

  return 0;
}