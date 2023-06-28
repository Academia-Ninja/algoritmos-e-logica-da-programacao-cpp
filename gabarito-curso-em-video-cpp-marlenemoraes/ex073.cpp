/*
  73) Crie um programa que preencha automaticamente (usando lógica, não apenas
    atribuindo diretamente) um vetor numérico com 10 posições, conforme abaixo:
    
      9 8 7 6 5 4 3 2 1 0
      0 1 2 3 4 5 6 7 8 9
 */

#include <iostream>

using namespace std;

int main() {
  int vetor[10];

 for (int i = 9; i >= 0; i--) {
    vetor[i] = i;
    cout << vetor[i] << " ";
  }

  for (int i = 0; i <= 9; i++) {
    vetor[i] = i;
    
    if (i == 0)
      cout << endl;
    
    cout << vetor[i] << " ";
  }

  cout << endl;
  
  return 0;
}