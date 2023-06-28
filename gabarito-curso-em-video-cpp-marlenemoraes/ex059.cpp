/*
	59) Crie um programa que leia o sexo e a idade de várias pessoas. 
    O programa vai perguntar se o usuário quer continuar ou não a cada pessoa. 
    No final, mostre:
        a) qual é a maior idade lida
        b) quantos homens foram cadastrados
        c) qual é a idade da mulher mais jovem
        d) qual é a média de idade entre os homens
*/

#include <iostream>
#include <cctype>

using namespace std;

int main() {
  int oldAge = 0;
  int men = 0;
  int newestWomen = 0;
  int age;
  float averageMen = 0;
  char answer = 's';
  char sex;

  cout << "Controle de Idade" << endl;
  
  while (answer != 'n') {
    cout << "Digite o sexo(F/M): ";
    cin >> sex;

    if (sex == 'm' || sex == 'f')
      answer = toupper(answer);

    cout << "Digite a idade: ";
		cin >> age;

    if (oldAge == 0 || oldAge < age)
      oldAge = age;
    
    
    if(sex == 'M'){
      men++;
			averageMen += age;
    } else if (sex == 'F'){
      if (newestWomen == 0 || newestWomen < age)
        newestWomen = age;
    } else {
      cout << "Erro. Tente novamente.";
    }

    cout << "Deseja continuar? (S/N) ";
    cin >> answer;

    if (answer == 'N') {
      answer = tolower(answer);
    }
	}

  averageMen /= men;
  
	cout << "Maior idade: " << oldAge << endl;
	cout << "Homens cadastrados: " << men << endl;
	cout << "Mulher mais jovem: " << newestWomen << endl;
	cout << "Média de idade dos homens: " << averageMen << endl;

  return 0;
}