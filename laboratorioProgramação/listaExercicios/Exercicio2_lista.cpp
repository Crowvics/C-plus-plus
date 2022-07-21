//Crie uma fun��o que calcule o aumento que ser� dado a um funcion�rio. Esta fun��o receber� como par�metro o sal�rio atual do funcion�rio e a porcentagem 
//de aumento. A fun��o dever�, ao final, imprimir o novo valor do sal�rio e o valor do aumento. 

#include <iostream>
#include <math.h>

using namespace std;

float calculoSalario (float salario, float porcentagem){
	float salarioLiquido, aumento = 0;
	aumento = salario*(porcentagem/100);
	salarioLiquido = salario + aumento;
	return salarioLiquido;
}

int main (){
	float salario, porcentagem = 0;
	cout << "Digite o salario do funcionario: ";
	cin >> salario;
	cout << "Digite a porcentagem de aumento: ";
	cin >> porcentagem;
	cout << "O novo salario do funcionario equivale a: " << calculoSalario (salario, porcentagem);
	return 0;
}
