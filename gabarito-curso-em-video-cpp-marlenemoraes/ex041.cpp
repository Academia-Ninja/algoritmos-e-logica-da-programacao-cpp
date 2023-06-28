/*
  41) Desenvolva um programa que mostre na tela a seguinte contagem:
    100 95 90 85 80 ... 0 Acabou!
*/

#include <iostream>

using namespace std;

int main() {
  int count = 100;
  
  while (count <= 18){
    cout << count << " ";
    count -= 5;
  }
  
  cout << "Acabou!" << endl;
  
  return 0;
}