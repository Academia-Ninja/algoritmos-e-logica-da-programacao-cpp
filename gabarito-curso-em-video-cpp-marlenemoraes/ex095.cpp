/*
  95) Refaça o exercício 90, só que agora em forma de função Somador(), que vai
    receber dois parâmetros e vai retornar o resultado da soma entre eles para o
    programa principal.
 */

#include <iostream>

using namespace std;

int somador(int a, int b) {
		return (a + b);
}  

int main() {
  int num1;
  int num2;

  cout << "SOMA DE VALORES" << endl;
  cout << "Digite um valor: ";
  cin >> num1;

  cout << "Digite outro valor: ";
  cin >> num2;

  int sum = somador(num1, num2);

  cout << "Soma: " << sum << endl;
  
  return 0;
}
  

