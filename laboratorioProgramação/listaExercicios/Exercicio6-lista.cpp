//Crie uma fun��o que retorne a m�dia de combust�vel gasto pelo usu�rio. Esta fun��o receber� a quantidade de quil�metros rodados e a quantidade de 
//combust�vel consumido

#include <iostream>
#include <math.h>

using namespace std;

float mediaCombustivel (float km, float combustivel){
	float media = 0;
	media = combustivel/km;
	return media;
}

int main (){
	float km, combustivel = 0;
	cout << "Informe a quantidade de quilometros rodados: ";
	cin >> km;
	cout << "Informe a quantidade de combustivel consumido: ";
	cin >> combustivel;
	cout << "A media de combustivel gasto equivale a: " << mediaCombustivel (km, combustivel);
	return 0;
}
