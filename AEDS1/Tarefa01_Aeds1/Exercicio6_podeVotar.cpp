#include <iostream>

using namespace std;

	void podeVotar (int idade){
		if (idade >=18){
			cout << "Voce pode votar";
		} else {
			cout << "Voce ainda nao pode votar";
		}
	}
	int main (){
		int anos = 0;
		cout << "Informe sua idade: ";
		cin >> anos;
		podeVotar (anos);
		return 0;
	}
