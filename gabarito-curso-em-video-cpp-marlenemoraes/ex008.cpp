/*
  8) Desenvolva um programa que leia uma distância em metros 
  e mostre os valores relativos em outras medidas.
  
  Ex:
    Digite uma distância em metros: 185.72
    A distância de 185.7m corresponde a:
      0.18572Km
      1.8572Hm
      18.572Dam
      1857.2dm
      18572.0cm
      185720.0mm
*/

#include <iostream>

using namespace std;

int main() {
  float m;

  cout << "Digite uma distância em metros: ";
  cin >> m;

  cout << "A distância de " << m << "m corresponde a:" << endl;
  cout << (m / 1000) << "km" << endl;
  cout << (m / 100) << "Hm" << endl;
  cout << (m / 10) << "Dam" << endl;
  cout << (m * 10) << "dm" << endl;
  cout << (m * 100) << "cm" << endl;
  cout << (m * 1000) << "mm" << endl;
  
  return 0;
}