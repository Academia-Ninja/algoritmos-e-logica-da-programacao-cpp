/*
  89)  Crie um programa que melhore o procedimento Gerador() da questão anterior
    para que o programador possa escolher uma entre três bordas:
    
    +-------=======------+ Borda 1
    ~~~~~~~~:::::::~~~~~~~ Borda 2
    <<<<<<<<------->>>>>>> Borda 3

    Ex: Uma chamada válida seria Gerador("Portugol Studio", 3, 2)
    ~~~~~~~~:::::::~~~~~~~
        Portugol Studio
        Portugol Studio
        Portugol Studio
    ~~~~~~~~:::::::~~~~~~~
 */

#include <iostream>

using namespace std;

void gerador(string m, int j, int b) {
  string t = "";

  switch (b) {
  case 1:
    t = "+-------=======------+";
    break;
  case 2:
    t = "~~~~~~~~:::::::~~~~~~~";
    break;
  case 3:
    t = "<<<<<<<<------->>>>>>>";
    break;
  default:
    cout << "ERRO." << endl;
  }
  
  cout << t << endl;
  
  for (int i = 0; i <= (j - 1); i++) 
    cout << m << endl;
  
  cout << t << endl;
}  

int main() {
  string message;
  int times;
  int border;

  cout << "Digite uma mensagem: ";
  cin >> message;
  cin.clear();

  cout << "Quantidade de vezes que a mensagem aparecerá: ";
  cin >> times;
  cin.clear();

  cout << "Tipo de borda que gostaria: ";
  cin >> border;
  cin.clear();

  gerador(message, times, border);
  
  return 0;
}
  

