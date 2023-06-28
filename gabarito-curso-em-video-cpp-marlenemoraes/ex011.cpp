/*
	11) Desenvolva uma lógica que leia os valores de A, B e C 
	de uma equação do segundo grau e mostre o valor de Delta.
 */


#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float a, b, c;
  double delta;
      
  //delta = -B +- (raiz de B^2 - 4 A C)/2A
      
  cout << "Valor de A: ";
  cin >> a;
        
  cout << "Valor de B: ";
  cin >> b; 
        
  cout << "Valor de C: ";
  cin >> c;
        
  delta = (-b + (sqrt(pow(b, 2))) - (4*a*c))/(2*a);
  cout.precision(2);
  cout << "O valor positivo de delta é " << delta << ".";
        
  delta = (-b - (sqrt(pow(b, 2))) - (4*a*c))/(2*a);
  cout.precision(2);
  cout << "O valor negativo de delta é " << delta << ".";
  return 0;
}