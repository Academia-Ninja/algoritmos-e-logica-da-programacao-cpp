/*
	62) Faça um programa usando a estrutura "faça enquanto" que leia a idade 
    de várias pessoas. 
    A cada laço, você deverá perguntar para o usuário se ele quer ou não 
    continuar a digitar dados. 
    No final, quando o usuário decidir parar, mostre na tela:
        a) Quantas idades foram digitadas
        b) Qual é a média entre as idades digitadas
        c) Quantas pessoas tem 21 anos ou mais.
*/

#include <iostream>
#include <cctype>

using namespace std;

int main() {
  char answer;
	int i = 0;
  int age;
  int olderTwetyOne = 0;
	float average = 0;

  do {
    cout << "Digite a idade: ";
    cin >> age;

    average += age;
    i++;

    if (age >= 21)
      olderTwetyOne++;
    

    cout << "Gostaria de continuar? (S/N) ";
    cin >> answer;
    answer = toupper(answer);
    
  } while (answer == 'S');

  average /= i;

  cout << "Idades digitadas: " << i << endl;
  cout << "Média das idades digitadas: " << average << endl;
  cout << "Pessoas com 21 anos ou mais: " << olderTwetyOne << endl;

  return 0;
}