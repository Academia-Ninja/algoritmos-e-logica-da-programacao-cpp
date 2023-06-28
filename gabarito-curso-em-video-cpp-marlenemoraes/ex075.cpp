/*
  75) Crie um programa que preencha automaticamente (usando lógica, não apenas
    atribuindo diretamente) um vetor numérico com 15 posições com os primeiros
    elementos da sequência de Fibonacci:
    
    1   1   2   3   5   8   13   21   34   55   89  144  233  377  610  987
    0   1   2   3   4   5   6     7   8     9   10   11  12   13   14    15
 */

#include <iostream>

using namespace std;

int main() {
  int vetor[15];

  int a1 = 1;
  int a2 = 1;
  int an = 2;

  cout << "Sequência de Fibonacci" << endl;
  cout << a1 << " " << a2 << " ";

  for (int i = 2; i <= 15; i++) {
    int an = a1 + a2;

    vetor[i] = an;


    cout << an << " ";
    a1 = a2;
		a2 = an;
  }


  for (int i = 0; i <= 15; i++) {
    if (i == 0) 
     cout << endl;
    
    if (i < 6) 
      cout << i << " ";
    else
     cout << i << "  ";
  }

  cout << endl;

  return 0;
}