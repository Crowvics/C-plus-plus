// Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação
// 1,2,3,4 = voto para os respectivos candidatos; - 5 = voto nulo; - 6 = voto em branco; Elabore um algoritmo que leia o código do candidado em um voto. 
// Calcule e escreva: - total de votos para cada candidato; - total de votos nulos; - total de votos em branco; Como finalizador do conjunto de votos, tem-se 
//o valor 0.

#include <iostream>

using namespace std;

int main (){
	int candidato1 = 0; int candidato2 = 0; int candidato3 = 0; int candidato4 = 0; int votoNulo = 0; int votoBranco= 0;
	int votos = 10;
	
	cout << endl;
	cout << "Os votos referentes a cada candidato estao indicados abaixo:  " << endl << endl;
	
	cout << "(1) - Candidato 1, (2) - Candidato 2, (3) - Candidato 3, (4) - Candidato 4" << endl;
	cout << "Caso deseje anular seu voto, digite (5) - Voto Nulo ou (6) - Voto em Branco" << endl;
	cout << "Para encerrar a votaçao, digite 0" << endl << endl;
	cout << "Insira aqui o seu voto: ";
	cin >> votos;
	
	while (votos != 0){
		switch (votos){
			case 0:
				break;
				
			case 1:
				candidato1 = candidato1 + 1;
				break;
		
			case 2:
				candidato2 = candidato2 + 1;
				break;
			
			case 3:
				candidato3 = candidato3 + 1;
				break;
			
			case 4:	
				candidato4 = candidato4 + 1;
				break;
			
			case 5: 
				votoNulo = votoNulo + 1;
				break;
			
			case 6:
				votoBranco = votoBranco + 1;
				break;
		
			default:
				cout << endl;
				cout << "DIGITE UMA OPCAO VALIDA!" << endl;
		}
		
		cout << endl;
		cout << "Os votos referentes a cada candidato estao indicados abaixo:  " << endl << endl;
	
		cout << "(1) - Candidato 1, (2) - Candidato 2, (3) - Candidato 3, (4) - Candidato 4" << endl;
		cout << "Caso deseje anular seu voto, digite (5) - Voto Nulo ou (6) - Voto em Branco" << endl;
		cout << "Para encerrar a votaçao, digite 0" << endl << endl;
		cout << "Insira aqui o seu voto: ";
		cin >> votos;
	}
	
	cout << endl;
	cout << "O numero de votos de cada candidato equivale a: " << endl << endl;
	cout << "Candidato 1: " << candidato1 << endl;
	cout << "Candidato 2: " << candidato2 << endl;
	cout << "Candidato 3: " << candidato3 << endl;
	cout << "Candidato 4: " << candidato4 << endl;
	cout << "Votos nulos: " << votoNulo << endl;
	cout << "Votos em branco: " << votoBranco << endl;
	
	return 0;
}







