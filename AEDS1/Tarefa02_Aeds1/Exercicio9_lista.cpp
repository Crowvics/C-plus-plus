//Escreva um programa para ler 3 valores inteiros e escrever o maior deles
//Considere que o usuário não informará valores iguais

#include <iostream>

using namespace std;

	int maiorValor (int a, int b, int c){
		int maior = 0;
		if (a > b){
			maior = a;
		} else {
			maior = b;
		} if (maior > c){
			maior = maior;
		} else {
			maior = c;
		}
		return maior;
	}

	int main (){
		int a = 0;
		int b = 0;
		int c = 0;
		cout << "Informe o primeiro numero inteiro: ";
		cin >> a;
		cout << "Informe o segundo numero inteiro: ";
		cin >> b;
		cout << "Informe o terceiro numero inteiro: ";
		cin >> c;
		
		cout << "O maior valor equivale a: " << maiorValor(a, b, c);
		return 0;
	}
