//A prefeitura deseja saber: a) média do salário da população; b) média do número de filhos; c) maior salário; d) percentual de pessoas com salário até R$100,00

#include <iostream>

using namespace std;

int main (){
	float salarios = 0; float mediaSalarios = 0; float maiorSalario = 0; float porcentagemSalario100 = 0; float somaSalarios = 0; float mediaFilhos = 0;
	int filhos = 0; float somaFilhos = 0; float salario100 = 0; int pessoas = 0;
	
	cout << endl;
	
	while (salarios >= 0){
		cout << "Informe o salario: ";
		cin >> salarios;
		if (salarios >= 0){
			cout << "Informe o numero de filhos: ";
			cin >> filhos;
			somaSalarios = salarios + somaSalarios;
			pessoas = pessoas + 1;
			somaFilhos = somaFilhos + filhos;
		
			if (salarios > maiorSalario){
				maiorSalario = salarios;
			}
			if (salarios <= 100){
				salario100 = salario100 + 1;
			}
		}
	}
	
	mediaSalarios = somaSalarios/pessoas;
	mediaFilhos = somaFilhos/pessoas;
	porcentagemSalario100 = (salario100*100)/pessoas;
	
	cout << endl;
	cout << "A media do salario da populacao equivale a: " << mediaSalarios << endl;
	cout << "A media do numero de filhos da populacao equivale a: " << mediaFilhos << endl;
	cout << "O maior salario equivale a: " << maiorSalario << endl;
	cout << "A porcentagem de pessoas com salario abaixo de 100 equivale a: " << porcentagemSalario100 << "%" << endl;
	
	return 0;
}
	
