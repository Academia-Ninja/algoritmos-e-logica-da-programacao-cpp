/*
  31) [DESAFIO] Crie um jogo de JoKenPo (Pedra-Papel-Tesoura)
*/

#include <iostream>

using namespace std;

int main() {
  string player1_choose, player1_name, player2_choose, player2_name; 

  cout << "JOGO PEDRA-PAPEL-TESOURA" << endl;
  cout << "Jogador 1: ";
  cin >> player1_name;

  cout << player1_name << ", você escolhe pedra, papel ou tesoura?" << endl;
  cin >> player1_choose;

  cout << "Jogador 2: ";
  cin >> player2_name;

  cout << player2_name << ", você escolhe pedra, papel ou tesoura?" << endl;
  cin >> player2_choose;

  // cadeia de if/else's para fins didáticos
  if (player1_choose == "pedra") {
    if (player2_choose == "pedra") 
      cout <<"EMPATE" << endl;
    else if (player2_choose == "papel") 
      cout << player2_name << " VENCEU!" << endl;
    else if (player2_choose == "tesoura") 
      cout << player1_name << " VENCEU!" << endl;
    else 
      cout << "ERRO. Tente novamente.";
  } else if (player1_choose == "papel") {
    if (player2_choose == "pedra") 
      cout << player1_name << " VENCEU!" << endl;
    else if (player2_choose == "papel")
      cout << "EMPATE" << endl;
    else if (player2_choose == "tesoura")
      cout << player2_name << " VENCEU!" << endl;
    else 
      cout << "ERRO. Tente novamente." << endl;
  } else {
    if (player2_choose == "pedra")
      cout << player2_name << " VENCEU!" << endl;
    else if (player2_choose == "papel")
      cout << player1_name << " VENCEU!" << endl;
    else if (player2_choose == "tesoura")
      cout <<"EMPATE" << endl;
    else
      cout <<"ERRO. Tente novamente." << endl;
  }

  return 0;
}