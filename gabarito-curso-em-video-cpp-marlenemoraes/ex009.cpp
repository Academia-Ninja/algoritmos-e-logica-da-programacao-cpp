/*
	9) Faça um algoritmo que leia quanto dinheiro uma pessoa 
	tem na carteira (em R$) e mostre quantos dólares ela 
	pode comprar. Considere US$1,00 = R$3,45.
*/


#include <iostream>

using namespace std;

int main() {
  float value, dollar;
        
  cout << "Qual value em reais (R$) tem na carteira? ";
  cin >> value;
  
  dollar = value / 3.45;

  cout.precision(3);
  cout << "Você pode comprar US$" << dollar << ".";
  
  return 0;
}