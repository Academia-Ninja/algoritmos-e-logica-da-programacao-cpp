/*
  98) Crie um programa que tenha uma função SuperSomador(), que vai receber dois
    números como parâmetro e depois vai retornar a soma de todos os valores no
    intervalo entre os valores recebidos.
    Ex:
    SuperSomador(1, 6) vai somar 1 + 2 + 3 + 4 + 5 + 6 e vai retornar 21
    SuperSomador(15, 19) vai somar 15 + 16 + 17 + 18 + 19 e vai retornar 85
 */

#include <iostream>

using namespace std;

int supersomador(int a, int b) {
  for (int i = (a + 1); i <= b; i++) 
		a += i;
	
  return a;
}  

int main() {
  int num1;
  int num2;

  cout << "SOMA DE VALORES" << endl;
  cout << "Digite um valor: ";
  cin >> num1;

  cout << "Digite outro valor: ";
  cin >> num2;

  int sum = supersomador(num1, num2);

  cout << "Soma: " << sum << endl;
  
  return 0;
}