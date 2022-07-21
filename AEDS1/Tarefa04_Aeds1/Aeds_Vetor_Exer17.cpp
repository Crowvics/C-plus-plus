#include <iostream>
#include <locale.h>

using namespace std;

void matrizTres (){
	float Matriz [3][3];
	int i = 0; int j = 0; 
	int determinante = 0;
	cout << "O programa a seguir preenche as linhas de uma matriz 3x3 sequencialmente" << endl << endl;
	for (i = 0; i < 3; i ++){
		for (j = 0; j < 3; j ++){
			cout << "Insira um valor: ";
			cin >> Matriz [i][j];
		}
	}
	cout << endl;
	
	for (i = 0; i < 3; i ++){
		for (j = 0; j < 3; j ++){
			cout << " \t" << Matriz [i][j];
		}
		cout << endl;
	}
	
	determinante = (Matriz[0][0] * Matriz[1][1] * Matriz[2][2]) + (Matriz[0][1] * Matriz[1][2] * Matriz[2][0])
	 + (Matriz[0][2] * Matriz[1][0] * Matriz[2][1]) - (Matriz[0][2] * Matriz[1][1] * Matriz[2][0]) - (Matriz[0][0]
	  * Matriz[1][2] * Matriz[2][1]) - (Matriz[0][1] * Matriz[1][0] * Matriz[2][2]);
	cout << endl;
	cout << "O determinante dessa matriz equivale a: " << determinante << endl;
}
	

int main (){
	setlocale (LC_ALL, "Portuguese");
	matrizTres ();	
	cout << endl << endl;
	system ("pause");
	return 0;
}
