//Calcule o sal�rio l�quido do funcion�rio sabendo que este � constitu�do pelo sal�rio bruto mais o valor das horas extras subtraindo 8% de INSS do total
//Ser�o lidos nesse problema o sal�rio bruto, o valor das horas extras e o n�mero de horas extras. Apresentar ao final o sal�rio l�quido

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
