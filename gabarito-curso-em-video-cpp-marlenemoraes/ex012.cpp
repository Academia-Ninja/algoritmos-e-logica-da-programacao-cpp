/*
	12) Crie um programa que leia o preço de um produto, 
	calcule e mostre o seu PREÇO PROMOCIONAL, com 5% 
	de desconto.
*/


#include <iostream>

using namespace std;

int main() {
  float price;

  cout << "Preço do produto: ";
  cin >> price;

  price -= (price * 0.05);

  cout << "PREÇO PROMOCIONAL: " << price << endl;
  
  return 0;
}