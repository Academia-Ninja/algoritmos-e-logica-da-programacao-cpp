/*
	63) Crie um programa usando a estrutura "faça enquanto" que leia vários números.
    A cada laço, pergunte se o usuário quer continuar ou não. No final, mostre 
    na tela:
        a) O somatório entre todos os valores
        b) Qual foi o menor valor digitado
        c) A média entre todos os valores
        d) Quantos valores são pares
*/

#include <iostream>
#include <cctype>

using namespace std;

int main() {
  char answer = 'S';
  int i = 0;
  int sum = 0;
  int even = 0;
  int lowerValue = 0;
  int number;
  float average = 0;

  do {
    cout << "Digite um número: ";
    cin >> number;

    sum += number;

    if (lowerValue == 0 || lowerValue > number) 
      lowerValue = number;

    if (number % 2 == 0) 
      even++;
    
    average += number;
    i++;

    cout << "Gostaria de continuar? (S/N)";
    cin >> answer;
    answer = toupper(answer);
    
  } while (answer == 'S');

  average /= i;

  cout << "Soma dos valores: " << sum << endl;
  cout << "Menor valor digitado: " << lowerValue << endl;
  cout << "Média entre todos os valores: " << average << endl;
  cout << "Valores Pares: " << even << endl;


  return 0;
}