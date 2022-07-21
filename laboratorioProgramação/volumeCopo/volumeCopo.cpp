//Construa uma sequencia de instrucoes para calcular o volume de um copo com 12 cm de altura e 6 cm de diametro, da seguinte forma
//Declare as variaveis para raio, altura e volume;
//Inicialize as variaveis cujo valor eh conhecido;
//Calcule o valor do volume e armazene-o na variavel.
#include <iostream>
#include <math.h>

using namespace std;
#define PI 3.141559

	int main (){
		float raio, altura, volume;
		raio = 3;
		altura = 12;
		volume = PI*(raio*raio)*altura;
		cout << "O volume de copo de 12 cm de altura e 6 de diametro eh: " << volume << endl;
		return 0;
	}
