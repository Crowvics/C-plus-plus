//Fa�a uma fun��o que receba um n�mero inteiro e teste se o valor lido termina com 0 (divis�vel por 10). Em caso positivo, exiba a metade deste n�mero.
//Caso contr�rio, exibir a mensagem "O n�mero digitado n�o termina com 0". 

#include <iostream>
#include <math.h>

using namespace std;

void divisivelDez (int numero){
	int valor = 0;
	if (numero % 10 == 0){
		valor = numero/2;
		cout << "O valor da metade do numero equivale a: " << valor;
	} else {
		cout << "O numero digitado nao termina com 0";
	}
}

int main (){
	int numero = 0;
	cout << "Informe um numero inteiro: ";
	cin >> numero;
	divisivelDez (numero);
	return 0;
}
