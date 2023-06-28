/*
  32) [DESAFIO] Crie um jogo onde o computador vai sortear um número 
	entre 1 e 5 o jogador vai tentar descobrir qual foi o valor sorteado.
*/

#include <iostream>

using namespace std;

int main() {
		int number, attempt;

		number = rand() % 5 + 1; // número aleatório do 1 ao 5

		cout << "MENTALISTA" << endl;
		cout << "Adivinhe o número que estou pensando (de 1 a 5): ";
		cin >> attempt;

		if (number == 0) {
			number++;
		} else {
			if (number == attempt)
				cout << "Você é um mentalista!" << endl;
			else
				cout <<"Não foi desta vez..." << endl;
		}

  return 0;
}