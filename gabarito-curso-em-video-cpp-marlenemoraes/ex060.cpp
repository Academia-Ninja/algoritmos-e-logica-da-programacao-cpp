/*
	60) Desenvolva um algoritmo que leia o nome, a idade e o sexo de várias pessoas.
    O programa vai perguntar se o usuário quer ou não continuar. No final, mostre:
        a) O nome da pessoa mais velha
        b) O nome da mulher mais jovem
        c) A média de idade do grupo
        d) Quantos homens tem mais de 30 anos
        e) Quantas mulheres tem menos de 18 anos
*/

#include <iostream>
#include <cctype>

using namespace std;

int main() {
  int count = 0;
  int age;
  int oldAge = 0;
  int newestWomen = 0;
  int olderThirty = 0;
  int newestEighteen = 0;
  float average = 0;
  char answer = 's';
  char sex;
  string name;

  cout << "Controle de Idade" << endl;
  
  while (answer != 'n') {

    cout << "Digite o nome: ";
		cin >> name;
    
    cout << "Digite a idade: ";
		cin >> age;

    if (oldAge == 0 || oldAge < age)
      oldAge = age;
    
    cout << "Digite o sexo(F/M): ";
    cin >> sex;

    if (sex == 'm' || sex == 'f')
      answer = toupper(answer);

    if(sex == 'M' && age > 30) { 
				olderThirty++;
				
    } else if (sex == 'F' && (newestWomen == 0 || newestWomen < age)){
      newestWomen = age;

      if (age < 18) 
        newestEighteen++;
					
    } else {
      cout << "Erro. Tente novamente.";
    }

    cout << "Deseja continuar? (S/N) ";
    cin >> answer;

    if (answer == 'N') {
      answer = tolower(answer);
    }
	}

  average /= count;

  cout << "Maior idade: " << oldAge << endl;
  cout << "Mulher mais jovem: " << newestWomen << endl;
  cout << "Média de idade: " << average << endl;
  cout << "Homens com mais de 30 anos: " << olderThirty << endl;
  cout << "Mulheres com menos de 18 anos: " << newestEighteen << endl;

  return 0;
}