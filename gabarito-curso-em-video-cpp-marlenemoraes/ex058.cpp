/*
	58) Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários.
    No final, mostre o total de salários pagos aos homens e o total pago às mulheres. 
    O programa vai perguntar ao usuário se ele quer continuar ou não sempre que ler 
    os dados de um funcionário.
*/

#include <iostream>

using namespace std;

int main() {
  float average = 0;
	int age = 0;
  int qtdstudent = 0;

  cout << "Controle de Idade" << endl;
  
  while (age != 999) {
    cout << "Digite a idade do aluno: ";
    cin >> age;

    if (age != 999) {
      average += age;
      qtdstudent++;
    }
  }

  average /= qtdstudent;

  cout << "Quantidade de alunos: " << qtdstudent << endl;
  cout << "Média de idade: " << average << endl;

  return 0;
}