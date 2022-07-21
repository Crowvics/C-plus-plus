#include <iostream>
#include <math.h>

using namespace std;

float distanciaPontos (float x1, float y1, float x2, float y2){
	float dx = (x2-x1)*(x2-x1);
	float dy = (y2-y1)*(y2=y1);
	float distancia = sqrt(dx+dy);
	return distancia;
}

int main (){
	float x1, x2, y1, y2;
	
	cout << "Informe x1: ";
	cin >> x1;
	cout << "Informe y1: ";
	cin >> y1;
	cout << "Informe x2: ";
	cin >> x2;
	cout << "Informe y2: ";
	cin >> y2;
	
	cout << "A distancia entre os pontos eh: " << distanciaPontos (x1,y1,x2,y2);
	return 0;
}
