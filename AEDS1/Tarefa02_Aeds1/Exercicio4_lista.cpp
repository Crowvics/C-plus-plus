//As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia, e R$ 0,25 se forem compradas pelo menos doze. Escreva um programa que leia o número de
// maçãs compradas, calcule e escreva o valor total da compra.

#include <iostream>
#include <math.h>

using namespace std;

	float valorCompra (int frutas){
		float preco = 0;
		if (frutas <= 11){
			preco = frutas*0.30;
		} else {
			if (frutas >= 12){
				preco = frutas*0.25;
			}
		}
		return preco;
	}
	
	int main (){
		int numero = 0;
		cout << "Digite o numero de frutas desejado: ";
		cin >> numero;
		cout << "O valor a ser pago equivale a: " << valorCompra (numero) << " reais";
		return 0;
	}
	
	
			

