//Escreva um programa para ler 3 valores inteiros (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente)

#include <iostream>

using namespace std;

	void ordemCrescente (int a, int b, int c){
		int aux = 0;
		
		if (a == b){
			cout << "Digite numeros diferentes!";
		} else {
			if (a == c){
				cout << "Digite numeros diferentes!";
			} else {
				if (b == c){
					cout << "Digite numeros diferentes!";
				} else {
					if (a > b){
						aux = a;
						a = b;
						b = aux;
					}
					if (a > c){
						aux = a;
						a = c;
						c = aux;
					}
					if (b > c){
						aux = b;
						b = c;
						c = aux;
					}
					cout << a << ", " << b << ", " << c;
				}
			}
		}
	}
		

	int main (){
		int numero1 = 0;
		int numero2 = 0;
		int numero3 = 0;
		cout << "Informe o primeiro numero: ";
		cin >> numero1;
		cout << "Informe o segundo numero: ";
		cin >> numero2;
		cout << "Informe o terceiro numero: ";
		cin >> numero3;
		
		ordemCrescente (numero1, numero2, numero3);
		return 0;
	}
		
	
	
