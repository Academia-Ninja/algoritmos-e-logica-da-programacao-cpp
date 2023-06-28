/*
  23) Numa promoção exclusiva para o Dia da Mulher, uma loja 
    quer dar descontos para todos, mas especialmente para 
    mulheres. Faça um programa que leia nome, sexo e o 
    valor das compras do cliente e calcule o preço com desconto. 
    Sabendo que:
        - Homens ganham 5% de desconto
        - Mulheres ganham 13% de desconto
*/

#include <iostream>

using namespace std;

int main() {
  string name;
  char gender;
  float total_shop;

  cout << "PROMOÇÃO DIA DA MULHER" << endl;
  cout << "Nome: ";
  cin >> name;

  cout << "Gênero(F/M): ";
  cin >> gender;

  cout << "Valor da compra: ";
  cin >> total_shop;

  if (gender == 'M')
    total_shop -= (total_shop * 0.05);
  else 
    total_shop -= (total_shop * 0.13);

  cout.precision(3);
  cout << "Valor total: R$" << total_shop << endl;
  
  return 0;
}
