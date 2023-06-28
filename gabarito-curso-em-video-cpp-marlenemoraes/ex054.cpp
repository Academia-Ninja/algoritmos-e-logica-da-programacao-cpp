/*
	54) Desenvolva um aplicativo que leia o peso e a altura de 7 pessoas, mostrando no final:
    a) Qual foi a média de altura do grupo
    b) Quantas pessoas pesam mais de 90Kg
    c) Quantas pessoas que pesam menos de 50Kg tem menos de 1.60m
    d) Quantas pessoas que medem mais de 1.90m pesam mais de 100Kg.
*/

#include <iostream>

using namespace std;

int main() {
  int count = 1;
  int moreNinty = 0;
  int smallerFifty = 0;
  int biggerOneHundred = 0;
	float average = 0;
  float weight;
  float height;

  cout << "Controle de Idade e Peso" << endl;
  
 while (count <= 7) {
    cout << "Digite o peso da " << count << " pessoa: ";
    cin >> weight;
  
    cout << "Digite a sua altura";
    cin >> height;
   
		average += height;

			if (weight < 50) {
        if (height < 1.60) 
					smallerFifty++;
      } else if (weight > 90) {
        moreNinty++;

				if (weight > 100) 
					if (height > 1.90) 
						biggerOneHundred++;
      } 
				

			count++;
	}

  average /= 7;
  
  cout << "Média de altura do grupo: " << average << endl;
  cout << "Pessoas pesam mais de 90Kg: " << moreNinty << endl;
  cout << "Pessoas que pesam menos de 50Kg tem menos de 1.60m: " << smallerFifty << endl;
  cout << "Pessoas que medem mais de 1.90m pesam mais de 100Kg: " << biggerOneHundred << endl;

  return 0;
}