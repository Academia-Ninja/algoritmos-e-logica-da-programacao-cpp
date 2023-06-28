/*
  2) Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de
  boas-vindas para ela:

  Ex:
      Qual é o seu nome? João da Silva
      Olá João da Silva, é um prazer te conhecer!
*/

#include <iostream>
using namespace std;

int main() {
  string name;

  cout << "Qual é o seu nome? ";
  cin >> name;

  cout << "Olá " << name << ", é um prazer te conhecer!";

  return 0;
}