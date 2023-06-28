/*
  44) Crie um algoritmo que leia o valor inicial da contagem, o valor final 
    e o incremento, mostrando em seguida todos os valores no intervalo:
    Ex: Digite o primeiro Valor: 3
        Digite o último Valor: 10
        Digite o incremento: 2
        Contagem: 3 5 7 9 Acabou!
*/

#include <iostream>

using namespace std;

int main() {
  int begin, end, i;
  
  cout << "Digite o primeiro Valor: ";
  cin >> begin;

  cout << "Digite o último Valor: ";
  cin >> end;

  cout << "Digite o incremento: ";
  cin >> i;

  if (i >= 0 && begin < end) {      
    while (begin <= end) {
       cout << begin << " "; 
       begin += i;
    } 
    
    cout << "Acabou!";
      
  } else
    cout << "Não é possível fazer a contagem.";
  
  return 0;
}


        
        