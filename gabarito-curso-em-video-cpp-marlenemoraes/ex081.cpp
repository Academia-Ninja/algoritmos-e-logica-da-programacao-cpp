      /*
    80) Crie um programa que leia a idade de 8 pessoas e guarde-as em um 
    vetor. No final, mostre:
      a) Qual é a média de idade das pessoas cadastradas
      b) Em quais posições temos pessoas com mais de 25 anos
      c) Qual foi a maior idade digitada (podem haver repetições)
      d) Em que posições digitamos a maior idade
 */
#include <iostream>

using namespace std;

int main() {
  int vetor[8];    
  int older_twenty_five[8];
  int older = 0;
  int older_position = 0;
  float avg_register = 0;
      
  for (int i = 0; i < 8; i++){
    cout << "Digite a idade: ";
    cin >> vetor[i];
    
    if (vetor[i] > 25)
      older_twenty_five[i] = vetor[i];
    
    if(vetor[i] > older){
      older = vetor[i];
      older_position++;
    }
    
    avg_register += vetor[i];
  }
    
    avg_register /= 8;
    
    cout << "Média de pessoas cadastradas: " << avg_register << endl;
    cout << "Posições com mais de 25 anos: ";  
    
    for (int i = 0; i <= 8; i++){
      if (older_twenty_five[i] != 0)
        cout <<  older_twenty_five[i] << " ";
      else
        continue;
    }
    
    cout << endl << "Maior idade digitada: "<< older << endl;
    
    cout << "Posições digitamos a maior idade: ";
    
    for (int i = 0; i < 8; i++){
      if (vetor[i] == older)
        cout << i << " ";
    }
       

  return 0;
}