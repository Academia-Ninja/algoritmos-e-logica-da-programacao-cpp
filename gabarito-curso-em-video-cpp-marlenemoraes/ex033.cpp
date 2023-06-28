/*
  33) Escreva um programa para aprovar ou não o empréstimo bancário 
    para a compra de uma casa. O programa vai perguntar o valor da 
    casa, o salário do comprador e em quantos anos ele vai pagar. 
    Calcule o valor da prestação mensal, sabendo que ela não pode 
    exceder 30% do salário ou então o empréstimo será negado.
*/

#include <iostream>

using namespace std;

int main() {
		float house_value, buyer_salary, installment, percent;
    int pay_time;
    
    cout << "EMPRÉSTIMO BANCÁRIO" << endl;
    cout << "Aprovação do empréstimo bancário" << endl;
    cout << "Valor do imóvel: ";
    cin >> house_value;
    
    cout << "Salário do comprador: ";
    cin >> buyer_salary;
    
    cout << "Tempo de pagamento (em anos): ";
    cin >> pay_time;
    
    pay_time *= 12; //reverte anos para meses
    
    installment = house_value / pay_time;
    
    percent = (float) (buyer_salary * 0.3);  
    
    if (installment > percent)
        cout << "Não é possível realizar o empréstimo." << endl;
    else
        cout << "Parabéns! Você pode fazer o empréstimo." << endl;
    
  return 0;
}