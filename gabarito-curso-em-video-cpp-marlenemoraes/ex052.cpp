/*
	52) Crie um algoritmo que leia a idade de 10 pessoas, mostrando no final:
    a) Qual é a média de idade do grupo
    b) Quantas pessoas tem mais de 18 anos
    c) Quantas pessoas tem menos de 5 anos
    d) Qual foi a maior idade lida
*/

#include <iostream>

using namespace std;

int main() {
  float average = 0;
  int count = 1;
  int bigger = 0;
  int smallerFive = 0;
  int biggerEighteen = 0;
  int age;

  cout << "Controle de Idade" << endl;
  
 while (count <= 10) {
		cout << "Digite a idade da " << count << " pessoa: ";
		cin >> age;

		average += age;

		if (count == 1)
			bigger = (int) age;
		else if (age > 18)
			biggerEighteen++;
		else if (age < 5)
			smallerFive++;

		count++;
	}

  average /= 10;


  cout << "Média de idade: " << average << endl;
  cout << "Maiores de 18 anos: " << biggerEighteen << endl;
  cout << "Menores de 5 anos: " << smallerFive << endl;
  cout << "Maior idade lida: " << bigger << endl;

  return 0;
}