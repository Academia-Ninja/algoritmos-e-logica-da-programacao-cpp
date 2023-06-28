/*
  91) Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses
    valores para um procedimento Maior() que vai verificar qual deles é o maior e
    mostrá-lo na tela. Caso os dois valores sejam iguais, mostrar uma mensagem
    informando essa característica.
 */

#include <iostream>

using namespace std;

void maior(int a, int b) {
  if (a > b)
    cout << "O primeiro número é maior que o segundo." << endl;
  else if (b > a)
    cout << "O segundo número é maior que o primeiro." << endl;
  else
    cout << "Os números são iguais" << endl;

}  

int main() {
  int num1;
  int num2;

  cout << "MAIOR DE VALOR" << endl;
  cout << "Digite um valor: ";
  cin >> num1;

  cout << "Digite outro valor: ";
  cin >> num2;

  maior(num1, num2);
  
  return 0;
}
  

