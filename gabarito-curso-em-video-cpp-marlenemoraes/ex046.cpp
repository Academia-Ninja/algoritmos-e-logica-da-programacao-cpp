/*
	46) Crie um programa que calcule e mostre na tela o resultado da soma 
	entre 6 + 8 + 10 + 12 + 14 + ... + 98 + 100.
 */

#include <iostream>

using namespace std;

int main() {
  int sum = 0;
  int count = 6;
      
  while (count <= 100){
      sum += count;
      count += 2;
  }

  cout << "A soma dos valores pares entre 6 e 100 é " << sum << "." << endl;

  return 0;
}