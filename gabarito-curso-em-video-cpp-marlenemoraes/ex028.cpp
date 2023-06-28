/*
  28) Faça um programa que leia a largura e o comprimento de um terreno retangular, 
    calculando e mostrando a sua área em m². O programa também deve mostrar a 
    classificação desse terreno, de acordo com a lista abaixo:
        - Abaixo de 100m² = TERRENO POPULAR
        - Entre 100m² e 500m² = TERRENO MASTER
        - Acima de 500m² = TERRENO VIP
*/

#include <iostream>

using namespace std;

int main() {
  float area, width, length;

  cout << "CLASSIFICAÇÃO DO TERRENO" << endl;
  cout << "Largura: ";
  cin >> width;

  cout << "Comprimento: ";
  cin >> length;

  area = width * length;

  if (area < 100) 
    cout << "TERRENO POPULAR" << endl;
  else if (area <= 500) 
    cout << "TERRENO MASTER" << endl;
  else 
    cout << "TERRENO VIP" << endl;

  return 0;
}