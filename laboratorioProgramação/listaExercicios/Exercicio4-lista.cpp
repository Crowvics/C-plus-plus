//Calcule o salário líquido do funcionário sabendo que este é constituído pelo salário bruto mais o valor das horas extras subtraindo 8% de INSS do total
//Serão lidos nesse problema o salário bruto, o valor das horas extras e o número de horas extras. Apresentar ao final o salário líquido

#include <iostream>
#include <math.h>

using namespace std;

float calculoSalario (float salario, float valorHora, float horaExtra){
	float salarioLiquido, salarioExtra, inss = 0;
	salarioExtra = salario + (valorHora*horaExtra);
	inss = salarioExtra*0.08;
	salarioLiquido = salarioExtra-inss;
	return salarioLiquido;
}

int main (){
	float salario, horaExtra, valorHora = 0;
	cout << "Informe o salario do funcionario: ";
	cin >> salario;
	cout << "Informe a hora extra: ";
	cin >> horaExtra;
	cout << "Informe o valor da hora extra: ";
	cin >> valorHora;
	cout << "O salario liquido desse funcionario equivale a: " << calculoSalario (salario, horaExtra, valorHora);
	return 0;
}
