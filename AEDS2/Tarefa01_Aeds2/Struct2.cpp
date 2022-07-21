#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

struct Bebida{
	string nome;
	float preco;
	float teorAlcolico;
	int estoque;
	float quantidadeLiquido;
};

void preencherBebida (Bebida &B){
	cout << "----------------------------------------------- Distribuidora Rio Pomba ------------------------------------------------";
	cout << endl;
	cout << "Aten��o! Os itens com teor alc�lico acima de 0% s� ser�o vendidos para pessoas acima de 18 anos" << endl << endl;
	cout << "Informe o nome da bebida: ";
	cin >> B.nome;
	cout << "Informe o pre�o: ";
	cin >> B.preco;
	cout << "Informe o teor alc�lico: ";
	cin >> B.teorAlcolico;
	cout << "Informe o estoque: ";
	cin >> B.estoque;
	cout << "Informe a quantidade de l�quido do recipiente: ";
	cin >> B.quantidadeLiquido;
	cout << endl;  
}

int main(){
	setlocale (LC_ALL, "Portuguese");
	Bebida B1;
	preencherBebida (B1);
	Bebida B2;
	preencherBebida (B2);
	Bebida B3;
	preencherBebida (B3);

	cout << endl << endl;
	system ("pause");
	return 0;
}
