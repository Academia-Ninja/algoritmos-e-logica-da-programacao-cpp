/*
   69) [DESAFIO] Desenvolva um programa que leia o primeiro termo e a 
    razão de uma PA (Progressão Aritmética), mostrando na tela os 
    10 primeiros elementos da PA e a soma entre todos os valores da 
    sequência.
 */

#include <iostream>

using namespace std;

int main() {
  /*
		 * Termo Geral da P.A.: an = a1 + (n-1)*r
		 * 
		 * Soma da P.A.: Sn = (a1+an)n/2
		 * 
		 * Razão da P.A.: r = a2-a1
		 */

		int an = 0;

		cout << "Progressão Aritmética" << endl;

		int a1;
    cout << "Digite o primeiro termo: ";
		cin >> a1;

		int r;
    cout << "Digite a razão da PA: ";
		cin >> r;

		cout << "Os 10 primeiros elementos da PA:" << endl;

		for (int i = 1; i <= 10; i++) {
			an = a1 + ((i - 1) * r);
			cout << an << " ";
		}

		int S = ((a1 + an) * 10) / 2;

		cout << "Soma da P.A.: " << S << endl;

  return 0;
}