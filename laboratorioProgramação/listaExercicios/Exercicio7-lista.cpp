//Faça uma função que receba como parâmetro uma nota de uma aluno e, se o valor for maior ou igual a 60, imprimir na tela "APROVADO", se for menor
//imprimir "REPROVADO". Testar ainda se o valor lido foi maior do que 100 ou menor do que zero. Neste caso, imprimir "NOTA INVÁLIDA". 

#include <iostream>
#include <math.h>

using namespace std;

void nota (float valor){
	if (valor > 100){
		cout << "NOTA INVALIDA";
	} else {
		if (valor < 0){
			cout << "NOTA INVALIDA";
		} else {
			if (valor >= 60){
				cout << "APROVADO";
			} else {
				if (valor < 60){
					cout << "REPROVADO";
				}
			}
		}
	}
}

int main (){
	float valor = 0;
	cout << "Informe a nota do aluno: ";
	cin >> valor;
	nota (valor);
}
