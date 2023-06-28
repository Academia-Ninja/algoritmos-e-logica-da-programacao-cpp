/*
    85) Faça um algoritmo que leia o nome, o sexo e o salário de 5 funcionários 
    e guarde esses dados em três vetores. No final, mostre uma listagem 
    contendo apenas os dados das funcionárias mulheres que ganham mais de R$5 mil.
 */

#include <iostream>
#include <cctype>

using namespace std;

int main() {
  string name[5];
  char sex[5];
  float salary[5];

  for (int i = 0; i < 5; i++) {
    cout << "Nome: ";
    cin >> name[i];

    cout << "Sexo(F/M): ";
    cin >> sex[i];

    if (sex[i] == 'F' || sex[i] == 'M')
      sex[i] = tolower(sex[i]);

    cout << "Salário: ";
    cin >> salary[i];
  }
  
  cout << endl << "MULHERES QUE GANHAM MAIS DE 5 MIL" << endl;

  for (int i = 0; i < 5; i++) {
    if ((sex[i] == 'f') && salary[i] < 5000) {
      cout << name[i];
      cout << "     " << sex[i];
      cout << "     " << salary[i];
    }
  }
  
  return 0;
}