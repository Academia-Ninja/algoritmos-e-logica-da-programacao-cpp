/*
   66) Escreva um programa que leia um número qualquer e mostre a tabuada 
    desse número, usando a estrutura "para".
    Ex: Digite um valor: 5
        5 x 1 = 5
        5 x 2 = 10
        5 x 3 = 15 ...
 */

#include <iostream>

using namespace std;

int main() {
  int value; 
  
  cout << "Digite um valor: ";
	cin >> value;

  for (int i = 1; i <= 10; i++) {
    int result = value * i;

    cout << value << " x " << i << " = " << result << endl;
  }

  return 0;
}