/*
  10) Faça um algoritmo que leia a largura e altura de uma parede, 
  calcule e mostre a área a ser pintada e a quantidade de tinta 
  necessária para o serviço, sabendo que cada litro de tinta 
  pinta uma área de 2 metros quadrados.
*/


#include <iostream>

using namespace std;

int main() {
  float width, height, area;
  int ink;
  
  cout << "Largura da parede: ";
  cin >> width;
  
  cout << "Altura da parede: ";
  cin >> height;
  
  area = width * height;
  
  ink = (int) (area / 2);
  
  cout << "Será necessário " << ink << " tintas para pintar a parede.";
       
  return 0;
}