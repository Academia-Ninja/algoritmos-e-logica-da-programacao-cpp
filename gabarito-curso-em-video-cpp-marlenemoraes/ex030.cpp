/*
  30) [DESAFIO] Refaça o algoritmo 25, acrescentando o recurso de mostrar 
    que tipo de triângulo será formado:
    
    - EQUILÁTERO: todos os lados iguais
    - ISÓSCELES: dois lados iguais
    - ESCALENO: todos os lados diferentes
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
					cout << "É possível formar um triângulo, ";
          if (side1 == side2 && side2 == side3)
            cout << "e é um triângulo equilátero.";
          else if (side1 == side2 || side2 == side3 || side1 == side3)
            cout << "e é um triângulo isósceles.";
          else 
            cout << "e é um triângulo escaleno.";
				}
			}
		} else {
			cout << "Não é possível formar um triângulo." << endl;
		}

  return 0;
}