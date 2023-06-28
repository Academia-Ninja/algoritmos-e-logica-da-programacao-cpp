/*
  39) Faça um algoritmo que mostre na tela a seguinte contagem:
    10 9 8 7 6 5 4 3 Acabou!
*/

#include <iostream>

using namespace std;

int main() {
  int count = 10;
  
  while (count >= 3){
    cout << count << " ";
    count--;
  }
  
  cout << "Acabou!" << endl;
  
  return 0;
}