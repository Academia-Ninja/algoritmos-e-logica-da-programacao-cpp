/*
	47) Desenvolva um aplicativo que mostre na tela o resultado da 
	expressão 500 + 450 + 400 + 350 + 300 + ... + 50 + 0
 */

#include <iostream>

using namespace std;

int main() {
  int sum = 0;
  int count = 500;
      
  while (count >= 0){
    sum += count;
    count -= 50;
  }

  cout << "A soma dos valores é " << sum << "." << endl;

  return 0;
}