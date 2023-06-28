/*
  88)  Crie um programa que melhore o procedimento Gerador() da questão anterior
  para que mostre uma mensagem várias vezes.
  
  Ex: Ao chamar Gerador("Aprendendo Portugol", 4) aparece:
  
  +-------=======------+
    Aprendendo Portugol
    Aprendendo Portugol
    Aprendendo Portugol
    Aprendendo Portugol
  +-------=======------+
 */

#include <iostream>

using namespace std;

void gerador(string m, int t) {
  cout << "+-------=======------+" << endl;
  for (int i = 0; i <= (t - 1); i++) 
    cout << m << endl;
  cout << "+-------=======------+" << endl;
}  

int main() {
  string message;
  int times;

  cout << "Digite uma mensagem: ";
  cin >> message;

  cout << "Quantidade de vezes que a mensagem aparecerá: ";
  cin >> times;

  gerador(message, times);
  
  return 0;
}
  

