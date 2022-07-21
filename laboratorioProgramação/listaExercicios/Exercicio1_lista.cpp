//Faça uma função que retorne a soma de dois números reais passados como parâmetro

#include <iostream>
#include <math.h>

using namespace std;

float soma (float x, float y){
	float somar = 0;
	somar = x + y;
	return somar;
}

int main (){
	float x = 0;
	float y = 0;
	cout << "Informe um numero: "; 
	cin >> x;
	cout << "Informe outro valor: ";
	cin >> y;
	cout << "A soma entre eles equivale a: " << soma (x, y);
	return 0;
}
