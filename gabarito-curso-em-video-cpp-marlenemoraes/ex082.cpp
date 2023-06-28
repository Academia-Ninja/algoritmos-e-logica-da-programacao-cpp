/*
    82) Faça um algoritmo que leia a nota de 10 alunos de uma turma e guarde-as em um vetor.
    No final, mostre:
        a) Qual é a média da turma
        b) Quantos alunos estão acima da média da turma
        c) Qual foi a maior nota digitada
        d) Em que posições a maior nota aparece
 */

#include <iostream>

using namespace std;

int main() {
  float grade[10];

  float avg_class = 0;
  float best_grade = 0;

  for (int i = 0; i <= 9; i++) {
    cout << "Digite a nota: ";
    cin >> grade[i];

    if (grade[i] > best_grade)
      best_grade = grade[i];

    avg_class += grade[i];
  }

  cout << endl << "RESULTADOS" << endl;
  avg_class /= 10;

  cout << "Média da turma: " << avg_class << endl;

  int above_average_students = 0;
  
  for (int i = 0; i < 10; i++) {
    if (grade[i] > avg_class) 
      above_average_students++;
    
  }

  cout << "Alunos acima da média da turma: " << above_average_students << endl;

  cout << "Maior nota digitada: " << best_grade << endl;

  cout << "Posições que a maior nota aparece: ";

  for (int i = 0; i < 10; i++) {
    if (grade[i] > avg_class) 
      cout << i << " ";
  }
  
  return 0;
}