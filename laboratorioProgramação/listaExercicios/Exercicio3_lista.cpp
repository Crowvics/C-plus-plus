//Faça uma função que converta uma quantidade de horas digitadas pelo usuário em minutos e retorne esta quantidade Faça a leitura da quantidade de horas na função
//principal

#include <iostream>
#include <math.h>

using namespace std;

float transformaMinutos (float horas){
	float totalMinutos = 0;
	totalMinutos = horas*60;
	return totalMinutos;
}

int main (){
	float horas = 0;
	cout << "Informe o numero de horas: ";
	cin >> horas;
	cout << "A quantidade de horas convertidas em minutos equivale a: " << transformaMinutos (horas);
	return 0;
}
