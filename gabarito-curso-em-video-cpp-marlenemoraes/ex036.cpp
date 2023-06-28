/*
  36) Um programa de vida saudável quer dar pontos atividades físicas 
    que podem ser trocados por dinheiro. O sistema funciona assim:
        - Cada hora de atividade física no mês vale pontos
            - até 10h de atividade no mês: ganha 2 pontos por hora
            - de 10h até 20h de atividade no mês: ganha 5 pontos por hora
            - acima de 20h de atividade no mês: ganha 10 pontos por hora
        - A cada ponto ganho, o cliente fatura R$0,05 (5 centavos)
    
    Faça um programa que leia quantas horas de atividade uma pessoa teve por 
    mês, calcule e mostre quantos pontos ela teve e quanto dinheiro ela conseguiu 
    ganhar.
*/

#include <iostream>

using namespace std;

int main() {
  float money;
  int points, hours;

  cout << "PROGRAMA DE PONTOS" << endl;
  cout << "Horas de atividade: ";
  cin >> hours;

  if (hours <= 10)
    points = hours * 2;
  else if (hours <= 20)
    points = hours * 5;
  else 
    points = hours * 10;

  money = (float) (points * 0.05);

  cout.precision(3);
  cout << "Pontos: " << points << endl; 
  cout << "Valor: R$" << money << endl;
  
  return 0;
}