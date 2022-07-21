#include <iostream>
#include <math.h>

using namespace std;

    int quadratica (int x){
        int valorDoQuadrado = 0;
        valorDoQuadrado = x*x;
        return valorDoQuadrado;
}

    int main(){
        int q = 0;
        q = quadratica (5);
        cout << "Valor da area de um quadrado de lado igual a 5 = " << q << endl;
        return 0;
}
