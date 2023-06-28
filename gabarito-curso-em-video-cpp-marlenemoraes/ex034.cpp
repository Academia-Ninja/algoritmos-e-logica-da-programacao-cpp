/*
  34) O Índice de Massa Corpórea (IMC) é um valor calculado baseado na altura 
    e no peso de uma pessoa. De acordo com o valor do IMC, podemos classificar 
    o indivíduo dentro de certas faixas.
        - abaixo de 18.5: Abaixo do peso
        - entre 18.5 e 25: Peso ideal
        - entre 25 e 30: Sobrepeso
        - entre 30 e 40: Obesidade
        - acima de 40: Obseidade mórbida
        
    Obs: O IMC é calculado pela expressão peso/altura² (peso dividido pelo quadrado da altura)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float weight, height, imc;
  
  cout << "Cálculo IMC" << endl;
  cout << "Peso: ";
  cin >> weight;
  
  cout << "Altura: ";
  cin >> height;

  imc = (float) (weight / pow(height, 2));

  if (imc < 18.5)
    cout << "Abaixo do peso"<< endl;
  else if (imc <= 25)
    cout << "Peso Ideal"<< endl;
  else if (imc <= 30)
    cout << "Sobrepeso"<< endl;
  else if (imc <= 40)
    cout << "Obesidade"<< endl;
  else if (imc > 40)
    cout << "Obesidade mórbida"<< endl;

  return 0;
}