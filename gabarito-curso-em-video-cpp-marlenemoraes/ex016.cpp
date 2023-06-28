/*
  16) [DESAFIO] Escreva um programa para calcular a redução do tempo de vida de um
  fumante. Pergunte a quantidade de cigarros fumados por dias e quantos anos ele
  já fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule
  quantos dias de vida um fumante perderá e exiba o total em dias.
*/

#include <iostream>

using namespace std;

int main() {
  int cigarrette, years, year_in_day;
  float cigarrette_time, lost_time;
  
  cout << "Vida do Fumante" << endl;
  cout << "Quantos cigarros são fumados ao dia? ";
  cin >> cigarrette;

  cout << "Quantos anos você é fumante? ";
  cin >> years;

  // 1 ano = 365 dias
  year_in_day = years * 365;

  // 10 minutos a cada cigarro
  cigarrette_time = cigarrette * 10;

  // tempo em minutos em anos
  cigarrette_time *= 365;

  // tempo em hora
  cigarrette_time /= 60;

  // tempo em dia
  cigarrette_time *= 24;

  lost_time = year_in_day - cigarrette_time;

  cout.precision(1);
  cout << "Você perderá " << lost_time << " dias." << endl;

  return 0;
}