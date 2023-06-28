/*
	51) Faça um aplicativo que leia o preço de 8 produtos. No final, mostre na tela 
	qual foi o maior e qual foi o menor preço digitados.
*/

#include <iostream>

using namespace std;

int main() {
  int count = 1;
  float bigger = 0;
  float smaller = 0;
  float price;
  
  cout << "Preço do produto" << endl;
  
 while (count < 8) {
			cout << "Digite o preço: ";
			cin >> price;

			if (count == 1) {
				bigger = price;
				smaller = price;
			} else if (price > bigger) 
				bigger = price;
			else if (price < smaller)
				smaller = price;

			count++;
		}

  cout << "Maior valor: " << bigger << "." << endl;
  cout << "Menor valor: " << smaller << "." << endl;

  return 0;
}