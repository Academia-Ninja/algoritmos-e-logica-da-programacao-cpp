/*
    86) Crie um programa que tenha um procedimento Gerador() que, quando chamado,
    mostre a mensagem "Olá, Mundo!" com algum componente visual (linhas)
    
    Ex: Ao chamar Gerador() aparece:
        +-------=======------+
            Olá, Mundo!
        +-------=======------+
 */

#include <iostream>

using namespace std;

// No caso do c++, precisa que todos os métodos sejam declarados ANTES da main
void gerador() {
  cout << "+-------=======------+" << endl;
  cout << "      Olá Mundo!      " << endl;
  cout << "+-------=======------+" << endl;
}  

int main() {
  gerador();
  
  return 0;
}
  

