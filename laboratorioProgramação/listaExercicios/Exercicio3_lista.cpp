//Fa�a uma fun��o que converta uma quantidade de horas digitadas pelo usu�rio em minutos e retorne esta quantidade Fa�a a leitura da quantidade de horas na fun��o
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
