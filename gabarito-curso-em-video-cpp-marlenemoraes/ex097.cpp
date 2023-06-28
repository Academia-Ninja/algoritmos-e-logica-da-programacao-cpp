/*
  97) Refaça o exercício 91, só que agora em forma de função Maior(), mas faça uma
    adaptação que vai receber TRÊS números como parâmetro e vai retornar qual foi o
    maior entre eles.
 */

#include <iostream>

using namespace std;

int maior(int a, int b, int c) {
  if (a > b) {
    if (a > c)
      return a;
  }
  if (b > a) {
    if (b > c) 
      return b;
  } else {
    return c;
  }

  return 0;
}  

int main() {
  int num1;
  int num2;
  int num3;

  cout << "MAIOR VALOR" << endl;
  cout << "Digite um valor: ";
  cin >> num1;

  cout << "Digite outro valor: ";
  cin >> num2;

  cout << "Digite o último valor: ";
  cin >> num3;

  int highest_value = maior(num1, num2, num3);

  cout << "Maior valor: " << highest_value << endl;
  
  return 0;
}