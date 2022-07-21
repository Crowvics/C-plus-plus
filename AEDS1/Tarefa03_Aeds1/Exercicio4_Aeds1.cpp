//Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo
//que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico

#include <iostream>

using namespace std;

int main (){
	float Pessoa1 = 0; float Pessoa2 = 0; float valorCrescimento1 = 0; float valorCrescimento2 = 0;
	int i = 0;
	
	cout << "Digite o valor da altura base da pessoa maior: ";
	cin >> Pessoa1;
	cout << "Digite o valor da altura base da pessoa menor: ";
	cin >> Pessoa2;
	cout << "Informe o crescimento anual da pessoa maior: ";
	cin >> valorCrescimento1;
	cout << "Informe o crescimento anual da pessoa menor: ";
	cin >> valorCrescimento2;
	
	if (valorCrescimento1 > valorCrescimento2){
		cout << endl;
		cout << "A segunda pessoa sera sempre menor que a primeira!";
	} else {
		for (i = 0; Pessoa1 > Pessoa2; i ++){
		
		Pessoa1 = Pessoa1 + valorCrescimento1;
		Pessoa2 = Pessoa2 + valorCrescimento2;	
		
		}
		
		cout << endl;
		cout << "Levara " << i << " anos para que a segunda pessoa seja maior que a primeira";
	}
	
	return 0;
}
