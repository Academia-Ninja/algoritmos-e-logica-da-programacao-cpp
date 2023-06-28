/*
  35) Uma empresa de aluguel de carros precisa cobrar pelos seus serviços. O
  aluguel de um carro custa R$90 por dia para carro popular e R$150 por dia para
    carro de luxo. Além disso, o cliente paga por Km percorrido. Faça um
  programa que leia o tipo de carro alugado (popular ou luxo), quantos dias de
  aluguel e quantos Km foram percorridos. No final mostre o preço a ser pago de
  acordo com a tabela a seguir:
        - Carros populares (aluguel de R$90 por dia)
            - Até 100Km percorridos: R$0,20 por Km
            - Acima de 100Km percorridos: R$0,10 por Km
        - Carros de luxo (aluguel de R$150 por dia)
            - Até 200Km percorridos: R$0,30 por Km
            - Acima de 200Km percorridos: R$0,25 por Km
*/

#include <iostream>
#include <string>

using namespace std;

// @author ailton_loures:
// Existem duas maneiras: utilizando switch (não tão necessário pra essa
// situação) e trocando pra if (o mais viável)

// Utilizando switch
/*
enum Options { Popular, Luxo, Invalido };

Options resolveOption(string input) {
  if (input == "popular")
    return Popular;
  if (input == "luxo")
    return Luxo;

  return Invalido;
}
*/

int main() {
  string car_type;
  float travelled_distance, price;

  cout << "ALUGUEL DE CARROS" << endl;
  cout << "Tipo de carro (popular / luxo): ";
  cin >> car_type;

  cout << "Distância percorrida: ";
  cin >> travelled_distance;

  /*
    switch (resolveOption(car_type)) {
    case Popular:
      if (travelled_distance <= 100)
        price = (float)(90 + (0.2 * travelled_distance));
      else
        price = (float)(90 + (0.1 * travelled_distance));
  
      cout << "O valor será de R$" << price << endl;
      break;
  
    case Luxo:
      if (travelled_distance <= 100)
        price = (float)(150 + (0.3 * travelled_distance));
      else
        price = (float)(150 + (0.25 * travelled_distance));
  
      cout << "O valor será de R$" << price << endl;
      break;
    default:
      cout << "Valor inválido. Tente de novo.";
  }
*/
  // cadeia de ifs - segunda solucao
  if(car_type == "popular" || car_type == "Popular") { // case sensitive
    if (travelled_distance <= 100)
        price = (float)(90 + (0.2 * travelled_distance));
      else
        price = (float)(90 + (0.1 * travelled_distance));
  
      cout << "O valor será de R$" << price << endl;
  } else if(car_type == "luxo" || car_type == "Luxo") {
    if (travelled_distance <= 100)
        price = (float)(150 + (0.3 * travelled_distance));
      else
        price = (float)(150 + (0.25 * travelled_distance));
  
      cout << "O valor será de R$" << price << endl;
  } else
    cout << "Valor inválido. Tente de novo.";
  
  return 0;
}