//Fa�a uma fun��o que imprima se um n�mero real recebido como par�metro � positivo, negativo ou neutro (zero)

#include <iostream>
#include <math.h>

using namespace std;

void Valor (float numero){
	if (numero > 0){
		cout << "Numero positivo";
	} else {
		if (numero < 0){
			cout << "Numero negativo";
		} else {
			if (numero == 0){
				cout << "Numero neutro";
			}
		}
	}
}

int main (){
	float numero = 0;
	cout << "Informe um numero: ";
	cin >> numero;
	Valor (numero);
	return 0;
}
