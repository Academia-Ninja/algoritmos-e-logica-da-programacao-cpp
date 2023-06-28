/*
    87)  Crie um programa que melhore o procedimento Gerador() da questão anterior
    para que mostre uma mensagem personalizada, passada como parâmetro.
    
    Ex: Ao chamar Gerador("Aprendendo Portugol") aparece:
        +-------=======------+
          Aprendendo Portugol
        +-------=======------+
 */

#include <iostream>

using namespace std;

void gerador(string m) {
  cout << "+-------=======------+" << endl;
  cout << m << endl;
  cout << "+-------=======------+" << endl;
}  

int main() {
  string message;

  cout << "Digite uma mensagem: ";
  cin >> message;

  gerador(message);
  
  return 0;
}
  

