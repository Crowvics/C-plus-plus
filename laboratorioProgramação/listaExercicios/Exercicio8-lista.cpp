//Fa�a uma fun��o que receba um n�mero inteiro e imprima o n�mero lido � par ou impar

#include <iostream>
#include <math.h>

using namespace std;

void parOuImpar (int valor){

    if (valor % 2 == 0){
    	cout << "Numero par";
	} else {
		cout << "Numero impar"; 
	}
}


int main (){
	int valor = 0;
	cout << "Informe um numero: ";
	cin >> valor;
	parOuImpar (valor);
	return 0;
}
