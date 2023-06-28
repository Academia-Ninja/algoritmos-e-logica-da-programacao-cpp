/*
  100) Melhore o exercício 96, criando além da função Media() uma outra função
    chamada Situacao(), que vai retornar para o programa principal se o aluno está
    APROVADO, em RECUPERAÇÃO ou REPROVADO. Essa nova função, vai receber como
    parâmetro o resultado retornado pela função Media().
 */

#include <iostream>

using namespace std;

float media(float n1, float n2) {
	return (n1 + n2) / 2;
}  

string situacao(float a) {
  if (a < 5) 
    return "REPROVADO";
  else if (a >= 6.9)
    return "RECUPERAÇÃO";
  else
    return "APROVADO";
}

int main() {
  float grade1;
  float grade2;

  cout << "MÉDIA DE NOTAS" << endl;
  cout << "Digite a primeira nota: ";
  cin >> grade1;

  cout << "Digite a segunda nota: ";
  cin >> grade2;

  float avg = media(grade1, grade2);
  string result = situacao(avg);

  cout << "Situação: " << result << endl;
  
  return 0;
}