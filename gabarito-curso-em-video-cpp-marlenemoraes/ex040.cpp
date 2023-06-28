/*
  40) Crie um aplicativo que mostre na tela a seguinte contagem:
    0 3 6 9 12 15 18 Acabou!
*/

#include <iostream>

using namespace std;

int main() {
  int count = 0;
  
  while (count <= 18){
    cout << count << " ";
    count += 3;
  }
  
  cout << "Acabou!" << endl;
  
  return 0;
}