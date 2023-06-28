/*
  14) A locadora de carros precisa da sua ajuda para cobrar seus serviços. 
  Escreva um programa que pergunte a quantidade de Km percorridos por 
  um carro alugado e a quantidade de dias pelos quais ele foi alugado. 
  Calcule o preço total a pagar, sabendo que o carro custa R$90 por 
  dia e R$0,20 por Km rodado.  
*/

#include <iostream>

using namespace std;

int main() {
  float kilometers, total;
  int days;

  cout << "Km percorridos: ";
  cin >> kilometers;

  cout << "Quantidade de dias que ele foi alugado: ";
  cin >> days;

  total = (float) ((kilometers * 0.2) + (90 * days));

  cout.precision(3);
  cout << "Serviço total: R$" << total << "." << endl;
  
  return 0;
}