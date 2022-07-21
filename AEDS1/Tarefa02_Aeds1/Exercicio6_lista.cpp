//Tendo como entrada a altura e o sexo (codificado da seguinte forma: 1:feminino 2:masculino) de uma pessoa, construa um programa que calcule e imprima seu
//peso ideal, utilizando as seguintes Fórmulas:
//para homens: (72.7 * Altura) – 58 
//para mulheres: (62.1 * Altura) – 44.7

#include <iostream>
#include <math.h>

using namespace std;

	float calculoPeso (float altura, int sexo){
		float peso = 0;
		if (sexo == 1){
			peso = (62.1*altura) - 44.7;
		} else {
			if (sexo == 2){
				peso = (72.7*altura) - 58;
			}
		}
		return peso;
	}
	
	int main (){
		float altura = 0;
		int sexo = 0;
		cout << "Informe sua altura: ";
		cin >> altura;
		cout << "Informe seu sexo, digite 1 para feminino ou 2 para masculino: ";
		cin >> sexo; 
		cout << "Seu peso ideal equivale a: " << calculoPeso (altura, sexo) << " kg";
		return 0;
	}

