//Escreva um programa que verifique a validade de uma senha fornecida pelo usuario. A senha valida eh o numero 1234. Devem ser impressas as seguintes mensagens:
//ACESSO PERMITIDO caso a senha seja válida.
//ACESSO NEGADO caso a senha seja inválida.

#include <iostream>

using namespace std;

	void  senhaAcesso (int codigo){
		if (codigo == 1234){
			cout << "Acesso permitido";
		} else {
			cout << "Acesso negado";
		}
	}

	int main (){
		int numero = 0;
		cout << "Digite a senha: ";
		cin >> numero;
		senhaAcesso (numero);
		return 0;
	}

