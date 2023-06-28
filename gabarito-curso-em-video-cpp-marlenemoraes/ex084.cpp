/*
    84) Crie um programa que leia o name e a idade de 9 pessoas e guarde esses 
    valores em dois vetores, em posições relacionadas. No final, mostre 
    uma listagem contendo apenas os dados das pessoas menores de idade.
 */

#include <iostream>

using namespace std;

int main() {
  string name[9];
	int age[9];


  for (int i = 0; i < 9; i++) {
    cout << "Nome: ";
    cin >> name[i];

    cout << "Idade: ";
    cin >> age[i];
    cout << endl;
  }

  cout << endl << "LISTAGEM MENORES DE IDADE" << endl;

  for (int i = 0; i < 9; i++) {
    if (age[i] < 18) {
      cout << name[i];
      cout << "     " << age[i] << endl;
    }
  }
  
  return 0;
}