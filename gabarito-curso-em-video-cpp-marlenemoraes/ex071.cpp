/*
   Faça um programa que preencha automaticamente um vetor numérico 
    com 8 posições, conforme abaixo:
      999 999 999 999 999 999 999 999
      0   1   2   3   4   5   6   7
 */

#include <iostream>

using namespace std;

int main() {
  int vetor[8];

  for (int i = 0; i <= 7; i++) {
    vetor[i] = 999;
    cout << vetor[i] << "   ";
  }

  for (int i = 0; i <= 7; i++) {
    vetor[i] = i;
    
    if (i == 0)
      cout << endl << vetor[i] << "     ";
    else 
      cout << vetor[i] << "     ";
  }

  cout << endl;
  
  return 0;
}