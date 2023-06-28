/*
  93) Faça um programa que tenha um procedimento chamado Contador() que recebe
    três valores como parâmetro: o início, o fim e o incremento de uma contagem. O
    programa principal deve solicitar a digitação desses valores e passá-los ao
    procedimento, que vai mostrar a contagem na tela.
    
    Ex: Para os valores de início (4), fim (20) e incremento(3) teremos
    Contador(4, 20, 3) vai mostrar na tela 4 >> 7 >> 10 >> 13 >> 16 >> 19 >> FIM
 */

#include <iostream>

using namespace std;

void contador(int begin, int end, int i) {
	for (int j = begin; j < end; j += i)
    cout << j << " >> ";
    
  cout << "FIM" << endl;
}  

int main() {
  int begin, end, i;

  cout << "CONTADOR" << endl;
  cout << "Digite o início: ";
  cin >> begin;

  cout << "Digite o fim: ";
  cin >> end;

  cout << "Digite o incremento: ";
  cin >> i;

  contador(begin, end, i);
  
  return 0;
}