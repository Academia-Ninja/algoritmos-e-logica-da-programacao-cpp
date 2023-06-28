/*
	50) Desenvolva um programa que faça o sorteio de 20 números entre 0 e 10 e mostre na tela:
    a) Quais foram os números sorteados
    b) Quantos números estão acima de 5
    c) Quantos números são divisíveis por 3
 */

#include <iostream>

using namespace std;

int main() {
  int count = 0;
  int biggerFive = 0;
  int divisibleThree = 0;
  int shuffle;
  
  cout << "Números sorteados:" << endl;
  
  while (count < 20) {
    shuffle = rand() % 10; 
    
    cout << shuffle << " ";

    if (shuffle > 5) 
      biggerFive++;
    
    if (shuffle % 3 == 0) 
      divisibleThree++;
    

    count++;
  }
  
  cout << endl;
  cout << "\nQuantidade de números acima de 5: " << biggerFive << "." << endl;
  cout << "Quantidade de números divisíveis por 3: " << divisibleThree << "." << endl;

  return 0;
}      