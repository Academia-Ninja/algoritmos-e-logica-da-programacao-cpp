/*
	61) Crie um programa que mostre na tela a seguinte contagem, usando a estrutura "faça enquanto"
        0 3 6 9 12 15 18 21 24 27 30 Acabou!
*/

#include <iostream>

using namespace std;

int main() {
  int count = 0;

  do {
    cout << count << " ";
    count += 3;
  } while (count <= 30);

  cout << "Acabou!" << endl;

  return 0;
}