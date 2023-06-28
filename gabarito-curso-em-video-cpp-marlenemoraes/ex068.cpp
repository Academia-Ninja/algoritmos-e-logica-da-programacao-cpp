/*
   68) Crie um programa que leia sexo e peso de 8 pessoas, usando a estrutura "para" 
    No final, mostre na tela:
        a) Quantas mulheres foram cadastradas
        b) Quantos homens pesam mais de 100Kg
        c) A média de peso entre as mulheres
        d) O maior peso entre os homens
 */

#include <iostream>
#include <cctype>

using namespace std;

int main() {
  int women = 0;
  int menMoreOneHundred = 0;
	float averageWomen = 0;
  float menGreater = 0;
  float weight;
  char sex;
  
  cout << "Controle de Sexo e Peso" << endl;
  
  for (int i = 1; i <= 8; i++) {
    cout << "Digite seu sexo(F/M): ";
    cin >> sex;
    sex = toupper(sex);

    cout << "Digite seu peso: ";
    cin >> weight;

    if (sex == 'F') {
      women++;
      averageWomen += weight;
    } else if (sex == 'M') {
      if (menGreater == 0 || menGreater < weight) 
        menGreater = weight;
      
      if (weight > 100) 
        menMoreOneHundred++;
    } else
      cout << "ERRO. Tente novamente." << endl;
	}

		averageWomen /= women;

		cout << "Mulheres cadastradas: " << women << endl;
		cout << "Homens que pesam mais de 100Kg: " << menMoreOneHundred << endl;
		cout << "Média de peso entre as mulheres: " << averageWomen << endl;
		cout << "Maior peso entre os homens: " << menGreater << endl;

  return 0;
}