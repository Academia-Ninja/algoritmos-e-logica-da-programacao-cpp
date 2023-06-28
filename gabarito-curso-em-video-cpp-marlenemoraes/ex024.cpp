/*
  24) Faça um algoritmo que pergunte a distância que um passageiro 
    deseja percorrer em Km. Calcule o preço da passagem, cobrando 
    R$0.50 por Km para viagens até 200Km e R$0.45 para viagens 
    mais longas.
*/

#include <iostream>

using namespace std;

int main() {
  float distance, ticket;

  cout << "Preço da passagem" << endl;
  cout << "Distância percorrida(KM): ";
  cin >> distance;

  if (distance <= 200)
    ticket = 0.50 * distance;
  else 
    ticket = 0.45 * distance;

  cout.precision(3);
  cout << "Preço da passagem: R$" << ticket << endl;
  
  return 0;
}
