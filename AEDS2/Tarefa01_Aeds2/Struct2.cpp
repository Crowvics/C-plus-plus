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
	cout << "Atenção! Os itens com teor alcólico acima de 0% só serão vendidos para pessoas acima de 18 anos" << endl << endl;
	cout << "Informe o nome da bebida: ";
	cin >> B.nome;
	cout << "Informe o preço: ";
	cin >> B.preco;
	cout << "Informe o teor alcólico: ";
	cin >> B.teorAlcolico;
	cout << "Informe o estoque: ";
	cin >> B.estoque;
	cout << "Informe a quantidade de líquido do recipiente: ";
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
