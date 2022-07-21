// Salario - 500,00 reais
// Até 3 salarios - imposto 0%
// De 3 a 6 salarios - imposto 12%
// De 6 a 8 salarios - imposto 20%
// Acima de 8 - imposto 27%
// Faça uma função que receba o salario de uma pessoa e calcule o imposto incidente e imprima na tela

#include <iostream>
#include <math.h>

using namespace std;

 float calculoSalario (float salario){
		float imposto = 0;
		if (salario <= 1500){
			imposto = 0;
		}else{
			if (salario <= 3000){
				imposto = salario*0.12;
			}else{
				if (salario <= 4000){
					imposto = salario*0.20;
				}else{
					if (salario > 4000){
						imposto = salario*0.27;
					}
				}
			}	
		}
		return imposto;
	}
	
	int main (){
		float ganho = 0;
		cout << "Informe quanto voce ganha por mes: ";
		cin >> ganho;
		cout << "O valor de imposto incidente: " << calculoSalario (ganho);
		return 0;
	}

