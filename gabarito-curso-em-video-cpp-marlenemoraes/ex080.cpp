/*
    80) Faça um algoritmo que preencha um vetor de 30 posições com números 
    entre 1 e 15 sorteados pelo computador. Depois disso, peça para o 
    usuário digitar um número (chave) e seu programa deve mostrar em 
    que posições essa chave foi encontrada. Mostre também quantas vezes 
    a chave foi sorteada.
 */

#include <iostream>

using namespace std;

int main() {
  int key, drawn_keys = 0;

		int vetor[30];

		for (int i = 0; i < 30; i++) {
			vetor[i] = rand() % 15 + 1;
		}

		cout << "Digite a chave desejada: ";
		cin >> key;

		cout << "Listagem da chave foi sorteada" << endl;
  
		for (int i = 0; i < 30; i++) {
			if (vetor[i] == key) {
				cout << vetor[i] << endl;
				drawn_keys++;
			}
		}

		cout << "Quantidade de vezes que a chave foi sorteada: " << drawn_keys << endl;

  return 0;
}