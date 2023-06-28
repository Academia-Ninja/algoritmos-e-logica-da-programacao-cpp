/*
  45) O programa acima vai ter um problema quando digitarmos o primeiro 
    valor maior que o último. Resolva esse problema com um código que 
    funcione em qualquer situação.
*/

#include <iostream>

using namespace std;

int main() {
  int begin, end, i;
  
  cout << "Digite o primeiro Valor: ";
  cin >> begin;

  cout << "Digite o último Valor: ";
  cin >> end;

  cout << "Digite o incremento ou decremento: ";
  cin >> i;

  if (begin <= end) {      
    while (begin <= end) {
       cout << begin << " "; 
       begin += i;
    } 
    
    cout << "Acabou!";  
  } else if (end < begin) {
			while (end <= begin) {
				cout << begin << " "; 
        begin -= i;
			}
    
			cout << "Acabou!";
  } else
    cout << "Não é possível fazer a contagem.";

  return 0;
}


        
        