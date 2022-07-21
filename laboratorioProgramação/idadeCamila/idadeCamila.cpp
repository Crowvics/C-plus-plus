#include <iostream>

using namespace std;

	void idadeCamila (int A, int B, int C){
		if ((A < 5) || (A > 100) || (B < 5) || (B > 100) || (C < 5) || (C > 100)){
			cout << "Digite uma idade entre 5 a 100 anos!";
		} else {
			int aux = 0;
			if (B > A){
				aux = A;
				A = B;
				B = aux;
			}
			if (C > A){
				aux = A;
				A = C;
				C = aux;
			}
			if (C > B){
				aux = B;
				B = C;
				C = aux;
			}
			cout << B; 
		}
	}
	
	int main (){
		int A, B, C;
		cin >> A;
		cin >> B;
		cin >> C;
		idadeCamila (A, B, C);
		return 0;
	}
