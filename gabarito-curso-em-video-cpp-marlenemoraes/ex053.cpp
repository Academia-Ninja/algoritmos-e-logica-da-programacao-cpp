/*
	53) Faça um programa que leia a idade e o sexo de 5 pessoas, mostrando no final:
    a) Quantos homens foram cadastrados
    b) Quantas mulheres foram cadastradas
    c) A média de idade do grupo
    d) A média de idade dos homens
    e) Quantas mulheres tem mais de 20 anos
*/

#include <iostream>

using namespace std;

int main() {
  int count = 1;
  int men = 0;
  int women = 0;
  int age;
  int womenBiggerTwenty = 0;
	float average = 0;
  float averageMen = 0;
  char sex;

  cout << "Controle de Idade" << endl;
  
 while (count <= 10) {
		cout << "Digite a idade da " << count << " pessoa: ";
		cin >> age;

		average += age;

   cout << "Digite o sexo(F/M): ";
		cin >> sex;
   
		if (sex == 'M'){
			men++;
			averageMen += age;
    } else if (sex == 'F') {
      women++;

      if (age > 20)
        womenBiggerTwenty++;
    } else
      cout << "Erro. Tente novamente." << endl;

		count++;
	}

  average /= 5;
	averageMen /= men;
  
  cout << "Homens cadastrados: " << men << endl;
  cout << "Mulheres cadastradas: " << women << endl;
  cout << "Média de idade do grupo: " << average << endl;
  cout << "Média de idade dos homens: " << averageMen << endl;
  cout << "Mulheres com mais de 20 anos: " << womenBiggerTwenty << endl;

  return 0;
}