/*
	57) Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários.
    No final, mostre o total de salários pagos aos homens e o total pago às mulheres. 
    O programa vai perguntar ao usuário se ele quer continuar ou não sempre que ler 
    os dados de um funcionário.
*/

#include <iostream>
#include <cctype>

using namespace std;

int main() {
  float salary = 0;
  float salaryMen = 0;
  float salaryWomen = 0;
  char answer = 's';
  char sex;

  cout << "Controle de Salário" << endl;
  
  while (answer != 'n') {
    cout << "Digite o sexo(F/M): ";
    cin >> sex;

    if (sex == 'm' || sex == 'f')
      answer = toupper(answer);

    if(sex == 'M'){
      cout << "Salário do funcionário: ";
      cin >> salary;
      salaryMen += salary;
    } else if (sex == 'F'){
      cout << "Salário da funcionária: ";
      cin >> salary;
      salaryWomen += salary;
    } else {
      cout << "Erro. Tente novamente.";
    }

    cout << "Deseja continuar? (S/N) ";
    cin >> answer;

    if (answer == 'N') {
      answer = tolower(answer);
    }
	}

  cout << "Total dos salário dos homens: " << salaryMen << endl;
  cout << "Total dos salário das mulheres: " << salaryWomen << endl;

  return 0;
}