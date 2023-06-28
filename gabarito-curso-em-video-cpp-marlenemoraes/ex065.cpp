/*
   65) Desenvolva um programa usando a estrutura "para" que mostre na tela a seguinte contagem:
        100 90 80 70 60 50 40 30 20 10 0 Acabou!
 */

#include <iostream>

using namespace std;

int main() {
  for (int i = 100; i >= 0; i -= 10) {
     cout << i << " ";
  }

   cout << "Acabou!" << endl;

  return 0;
}