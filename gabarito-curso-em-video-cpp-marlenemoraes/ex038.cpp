/*
  38) Escreva um programa que mostre na tela a seguinte contagem:
    6 7 8 9 10 11 Acabou!
*/

#include <iostream>

using namespace std;

int main() {
  int count = 6;
  
  while (count <= 11){
    cout << count << " ";
    count++;
  }
  
  cout << "Acabou!" << endl;
  
  return 0;
}