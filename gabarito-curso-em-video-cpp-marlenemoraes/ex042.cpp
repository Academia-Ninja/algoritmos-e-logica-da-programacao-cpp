/*
  42) Faça um algoritmo que pergunte ao usuário um número inteiro 
    e positivo qualquer e mostre uma contagem até esse valor:
    Ex: Digite um valor: 35
    Contagem: 1 2 3 4 5 6 7 ... 33 34 35 Acabou!
*/

#include <iostream>

using namespace std;

int main() {
  int count = 1;
  int value;

  cout << "Digite um valor: ";
  cin >> value;
  
  while (count <= value){
    cout << count << " ";
    count++;
  }
  
  cout << "Acabou!" << endl;
  
  return 0;
}