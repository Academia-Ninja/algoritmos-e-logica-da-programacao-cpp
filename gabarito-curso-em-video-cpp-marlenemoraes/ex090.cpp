/*
  90) Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses
    valores para um procedimento Somador() que vai calcular e mostrar a soma 
    entre eles.
 */

#include <iostream>

using namespace std;

void somador(int a, int b) {
  int sum = a + b;

  cout << "Soma: " << sum << endl;
}  

int main() {
  int num1;
  int num2;

  cout << "SOMA DE VALORES" << endl;
  cout << "Digite um valor: ";
  cin >> num1;

  cout << "Digite outro valor: ";
  cin >> num2;

  somador(num1, num2);
  
  return 0;
}
  

