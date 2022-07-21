#include <iostream>
#include <locale.h>

using namespace std;

void calculoVetor (){
	float Q [20];
	float maiorVetor = Q[0];
	float posicaoVetor = 0;
	for (int i = 0; i < 20; i ++){
		cout << "Informe o valor do vetor " << i+1 << ": ";
		cin >> Q[i];
		while (Q[i] < 0){
			cout << "Informe um valor positivo! Digite novamente: ";
			cin >> Q[i];
		}
		if (Q[i] > maiorVetor){
			maiorVetor = Q[i];
			posicaoVetor = i + 1;
		}
	}
	cout << endl;
	cout << "O valor do maior vetor é: " << maiorVetor << endl;
	cout << "E sua respectiva posição é: " << posicaoVetor << endl;
}

int main (){
	setlocale (LC_ALL, "Portuguese");
	calculoVetor ();	
	cout << endl << endl;
	system ("pause");
	return 0;
}
