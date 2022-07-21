#include <iostream>
#include <locale.h>

using namespace std;

float Matriz [6][6]; int somaLinhas[5]; int somaColunas [5]; int j = 0; int i = 0; int maiorLinha = 0; int maiorColuna = 0;

void matrizSeis (){
	cout << "Matriz de ordem 6" << endl << endl;
	Matriz [0][0] =  1;
	Matriz [0][1] =  3;
	Matriz [0][2] =  3;
	Matriz [0][3] =  5;
	Matriz [0][4] =  6;
	Matriz [0][5] =  7;
	Matriz [1][0] =  2;
	Matriz [1][1] =  1;
	Matriz [1][2] =  2;
	Matriz [1][3] =  5;
	Matriz [1][4] =  7;
	Matriz [1][5] =  9;
	Matriz [2][0] =  2;
	Matriz [2][1] =  4;
	Matriz [2][2] =  5;
	Matriz [2][3] =  9;
	Matriz [2][4] =  2;
	Matriz [2][5] =  15;
	Matriz [3][0] =  5;
	Matriz [3][1] =  8;
	Matriz [3][2] =  8;
	Matriz [3][3] =  2;
	Matriz [3][4] =  13;
	Matriz [3][5] =  12;
	Matriz [4][0] =  5;
	Matriz [4][1] =  6;
	Matriz [4][2] =  5;
	Matriz [4][3] =  8;
	Matriz [4][4] =  14;
	Matriz [4][5] =  16;
	Matriz [5][0] =  5;
	Matriz [5][1] =  5;
	Matriz [5][2] =  7;
	Matriz [5][3] =  12;
	Matriz [5][4] =  14;
	Matriz [5][5] =  15;
	
//Soma de cada Linha
	for (j = 0; j < 6; j ++){
		somaLinhas[0] += Matriz [0][j];
	}
	for (j = 0; j < 6; j ++){
		somaLinhas[1] =+ Matriz [1][j];
	}
	for (j = 0; j < 6; j ++){
		somaLinhas[2] += Matriz [2][j];
	}
	for (j = 0; j < 6; j ++){
		somaLinhas[3] += Matriz [3][j];
	}
	for (j = 0; j < 6; j ++){
		somaLinhas[4] += Matriz [4][j];
	}
	for (j = 0; j < 6; j ++){
		somaLinhas[5] += Matriz [5][j];
	}

//Soma de cada Coluna	
	for (i = 0; i < 6; i ++){
		somaColunas[0] += Matriz [i][0];
	}
	for (i = 0; i < 6; i ++){
		somaColunas[1] += Matriz [i][1];
	}
	for (i = 0; i < 6; i ++){
		somaColunas[2] += Matriz [i][2];
	}
	for (i = 0; i < 6; i ++){
		somaColunas[3] += Matriz [i][3];
	}
	for (i = 0; i < 6; i ++){
		somaColunas[4] += Matriz [i][4];
	}
	for (i = 0; i < 6; i ++){
		somaColunas[5] += Matriz [i][5];
	}
	for (i = 0; i < 6; i ++){
		for (j = 0; j < 6; j ++){
			cout << " \t" << Matriz [i][j];
		}
		cout << endl;
	}
}
	
int funcaoMaiorLinha (){
	for (i = 0; i < 6; i ++){
		if (maiorLinha < somaLinhas [i] || i == 0){
		maiorLinha = i;
		}
	}
	return maiorLinha;
}
	
int funcaoMaiorColuna (){
	for (j = 0; j < 6; j ++){
		if (maiorColuna < somaColunas [j] || j == 0){	
		maiorColuna = j;
		}
	}
	return maiorColuna;
}

void funcaoTroca (){
	for (i = 0; i < 6; i ++){
		for (j = 0; j < 6; j ++){
			if (Matriz [i][j] > 10){
				Matriz [i][j] = 10;
			}
			cout << " \t" << Matriz [i][j];
		}
		cout << endl;
	}
	
}
		
int main (){
	setlocale (LC_ALL, "Portuguese");
	matrizSeis ();	
	cout << endl;
	cout << "A maior linha é a linha: " << funcaoMaiorLinha() << endl;
	cout << "A maior coluna é a coluna: " << funcaoMaiorColuna() << endl;
	cout << endl;
	funcaoTroca ();
	cout << endl << endl;
	system ("pause");
	return 0;
}
