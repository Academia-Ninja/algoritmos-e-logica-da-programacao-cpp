/*
	55) [DESAFIO] Vamos melhorar o jogo que fizemos no exercício 32. A partir de
    agora, o computador vai sortear um número entre 1 e 10 e o jogador vai ter 4
    tentativas para tentar acertar.
*/

#include <iostream>

using namespace std;

int main() {
  int number;
  int attempt;
  int count = 0;

  number = rand() % 10 + 1; // número aleatório do 1 ao 10

  cout << "MENTALISTA" << endl;
  cout << "Adivinhe o número que estou pensando (de 1 a 10): ";
  cin >> attempt;

  while (count < 3){
    if (number == 0) {
      number++;
    } else if (number == attempt) {
      cout << "Você é um mentalista!" << endl;
      break;
    }

    count++;
    cout << "Tente de novo: ";
    cin >> attempt;
  }

  if (number != attempt)
    cout << "Não foi desta vez..." << endl;

  return 0;
}