/*
  25) [DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta.
    Analise seus comprimentos e diga se é possível formar um triângulo com 
    essas retas. Matematicamente, para três segmentos formarem um triângulo, 
    o comprimento de cada lado deve ser menor que a soma dos outros dois.
*/

#include <iostream>

using namespace std;

int main() {
  float side1, side2, side3;

  cout << "Triângulo ou não?" << endl;
  cout << "Reta 1: ";
  cin >> side1;

  cout << "Reta 2: ";
  cin >> side2;

  cout << "Reta 3: ";
  cin >> side3;

  if (side1 < side2 + side3) {
			if (side2 < side1 + side3) {
				if (side3 < side1 + side2) {
					cout << "É possível formar um triângulo" << endl;
				}
			}
		} else {
			cout << "Não é possível formar um triângulo." << endl;
		}

  return 0;
}