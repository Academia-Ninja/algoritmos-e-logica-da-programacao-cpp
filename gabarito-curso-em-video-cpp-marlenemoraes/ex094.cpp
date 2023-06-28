/*
  94) [DESAFIO] Desenvolva um aplicativo que tenha um procedimento chamado
    Fibonacci() que recebe um único valor inteiro como parâmetro, indicando quantos
    termos da sequência serão mostrados na tela. O seu procedimento deve receber
    esse valor e mostrar a quantidade de elementos solicitados.
    Obs: Use os exercícios 70 e 75 para te ajudar na solução
    Ex:
    Fibonacci(5) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> FIM
    Fibonacci(9) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> 8 >> 13 >> 21 >> 34 >> FIM
 */

#include <iostream>

using namespace std;

void fibonacci(int t) {
	int vetor[t];

  int a1 = 1;
  int a2 = 1;
  int an;

  cout << "Sequência de Fibonacci" << endl;
  cout << a1 << " >> " << a2 << " >> ";

  for (int i = 2; i <= t; i++) {
    an = a1 + a2;

    vetor[i] = an;

    cout << an << " >> ";
    a1 = a2;
		a2 = an;
  }
  cout << "FIM" << endl;
}  

int main() {
  int t;

  cout << "Digite o número de termos: ";
  cin >> t;

  fibonacci(t);
  
  return 0;
}
  

