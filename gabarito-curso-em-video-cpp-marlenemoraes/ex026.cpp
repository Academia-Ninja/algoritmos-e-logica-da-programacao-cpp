/*
  26) Escreva um algoritmo que leia dois n�meros inteiros 
    e compare-os, mostrando na tela uma das mensagens abaixo:
     - O primeiro valor é o maior
     - O segundo valor é o maior
     - Não existe valor maior, os dois são iguais
*/

#include <iostream>

using namespace std;

int main() {
  int number1, number2;

  cout << "Maior ou Menor?" << endl;
  cout << "Digite um valor: ";
  cin >> number1;

  cout << "Digite outro valor: ";
  cin >> number2;

  if (number1 > number2) 
    cout << "O primeiro valor é o maior.";
  else if (number2 > number1) 
    cout << "O segundo valor é o maior.";
  else 
    cout << "Não existe valor maior, os dois são iguais.";

  return 0;
}