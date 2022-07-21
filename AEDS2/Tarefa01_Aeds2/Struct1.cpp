#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

struct Personagem {
	string nome;
	string classe;
	int forca;
	int destreza;
	int inteligencia;
	int carisma;
};

void preencherPersonagem (Personagem &P){
	cout << "-------------------------------------------------- Dungeons & Dragons --------------------------------------------------";
	cout << endl;
	cout << "Os valores predefinidos para distribuição de pontos são: 18, 16, 14, 12, escolha com sabedoria" << endl << endl;
	cout << "Informe o nome do seu personagem: ";
	cin >> P.nome;
	cout << "Informe a classe do personagem: ";
	cin >> P.classe;
	cout << "Informe o valor de força: ";
	cin >> P.forca;
	cout << "Informe o valor de desteza: ";
	cin >> P.destreza;
	cout << "Informe o valor de inteligência: ";
	cin >> P.inteligencia;
	cout << "Informe o valor de carisma: ";
	cin >> P.carisma;
	cout << endl;  
}

int main(){
	setlocale (LC_ALL, "Portuguese");
	Personagem P1;
	preencherPersonagem (P1);
	Personagem P2;
	preencherPersonagem (P2);
	Personagem P3;
	preencherPersonagem (P3);

	cout << endl << endl;
	system ("pause");
	return 0;
}
