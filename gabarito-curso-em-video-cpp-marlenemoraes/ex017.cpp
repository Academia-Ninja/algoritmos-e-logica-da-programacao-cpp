/*
  17) Escreva um programa que pergunte a velocidade de um carro. 
  Caso ultrapasse 80Km/h, exiba uma mensagem dizendo que o 
  usuário foi multado. Nesse caso, exiba o valor da multa, 
  cobrando R$5 por cada Km acima da velocidade permitida.
*/

#include <iostream>

using namespace std;

int main() {
  float velocity, velocity_bill;
  
  cout << "Qual a velocidade do carro? ";
  cin >> velocity;

  if (velocity > 80) {
    velocity_bill = (velocity - 80) * 5;
  
    cout.precision(2);
    cout << "Você ultrapassou, e sua multa foi de R$" << velocity_bill << "." << endl;
	}
  return 0;
}