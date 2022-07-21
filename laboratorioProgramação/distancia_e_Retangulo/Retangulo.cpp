#include <iostream>
#include <math.h>

using namespace std;

float calculoAreaRetangulo (float base, float altura){
	float area = 0;
	area = base*altura;
	return area;
}

float calculoPerimetroRetangulo (float base, float altura){
	float perimetro = 0;
	perimetro = 2*(base+altura);
	return perimetro;
}

int main (){
	float base, altura;
	cout << "Informe o valor da base do retangulo: ";
	cin >> base;
	cout << "Informe o valor da altura do retangulo: ";
	cin >> altura;
	cout << "O valor de sua area totaliza: " << calculoAreaRetangulo (base, altura) << " cm quadrados" << endl;
	cout << "O valor de seu perimetro totaliza: " << calculoPerimetroRetangulo (base, altura) << " cm";
	return 0;
}
