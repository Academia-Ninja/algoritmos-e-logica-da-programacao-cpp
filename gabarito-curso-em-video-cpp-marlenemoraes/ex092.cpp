/*
  92) Crie uma lógica que leia um número inteiro e passe para um procedimento
    ParOuImpar() que vai verificar e mostrar na tela se o valor passado como
    parâmetro é PAR ou  ÍMPAR.
 */

#include <iostream>

using namespace std;

void ParOuImpar(int n) {
	if (n % 2 == 0)
    cout << "PAR" << endl;
  else
    cout << "ÍMPAR" << endl;

}  

int main() {
  int number;

  cout << "Par ou Ímpar?" << endl;
  cout << "Digite um valor: ";
  cin >> number;

  ParOuImpar(number);
  
  return 0;
}