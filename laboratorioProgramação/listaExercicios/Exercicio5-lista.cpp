//Faça uma função que receba a quantidade de quilowatts consumido em uma casa e calcule o valor a ser pago de energia elétrica, sabendo-se que o valor 
//a pagar por quilowatt é de R$ 0,46. Apresentar o valor total a ser pago pelo usuário acrescido de 18% de ICMS

#include <iostream>
#include <math.h>

using namespace std;

float valorEnergia (float kW){
	float valorKW, icms, valorPagar = 0;
	valorKW = kW*0.46;
	icms = valorKW*0.18;
	valorPagar = valorKW + icms;	
	return valorPagar;
}

int main (){
	float kW = 0;
	cout << "Informe a quantidade de quilowatts consumidos: ";
	cin >> kW;
	cout << "O valor a ser pago equivale a: " << valorEnergia (kW);
	return 0;
}
