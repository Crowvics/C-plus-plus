#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;

struct Produto{
	string nome = " ";
	float custo = 0;
	float preco = 0;
	int estoque = 0;
};

int tamanho = 0;
int qtd = 0;
int pesquisarPorNome ();

void imprimirProduto (int i, Produto *produtos){
	cout << "--------- Dados do Produto ------------" << endl;
	cout << "Nome: " << produtos[i].nome <<  endl;
	cout << "Custo: " << produtos[i].custo << endl;
	cout << "Preço: " << produtos[i].preco << endl;
	cout << "Estoque: " << produtos[i].estoque << endl;
	cout << "---------------------------------------" << endl;
}

void inserirProduto (Produto *produtos){
	if (qtd < tamanho){
		cout << "------------ Inserir produto ------------" << endl;
		cout << "Nome: ";
		cin >> produtos[qtd].nome;
		
		cout << "Custo: ";
		cin >> produtos[qtd].custo;
		
		cout << "Preço: ";
		cin >> produtos[qtd].preco;
		
		cout << "Estoque: ";
		cin >> produtos[qtd].estoque;
		
		qtd = qtd + 1;
	} else {
		cout << "A sua base de dados já está cheia" << endl;
	}
}

int pesquisarPorNome(Produto *produtos){
	string nome;
	cout << "---------- Pesquisa por nome -----------" << endl;
	cout << "Informe o nome do produto que deseja pesquisar: ";
	cin >> nome;
	
	for (int i = 0; i < tamanho; i++){
		if (produtos[i].nome == nome){
			cout << "Produto encontrado na posição " << i << "!" << endl;
			imprimirProduto (i, produtos);
			return i;
		}
	}
	cout << "Produto não encontrado" << endl;
	return -1;
}

void verificaAbaixoEstoque (Produto *produtos){
	int min = 0;
	do{
		cout << "Informe o estoque mínimo: ";
		cin >> min;
		
		if (min < 0){
			cout << "Error - quantidade inválida!";
		}
	} while (min < 0);
	
	for (int i = 0; i < qtd; i++){
		if (produtos[i].estoque <= min){
			cout << produtos[i].nome << "\t";
			cout << produtos[i].estoque << "\t";
			cout << "comprar (" << min - produtos[i].estoque << ")" << endl;
		}
	}
}

void atualizaTodosPrecos (Produto *produtos){
	float lucro = 0;
	do{
		cout << "Informe seu lucro desejado (0 - 100): ";
		cin >> lucro;
	} while (lucro <=0);
	
	for (int i = 0; i < qtd; i++){
		//atualizar o preço
		produtos[i].preco = produtos[i].custo * (1.0 + lucro/100);
	}
}

void atualizarProduto (Produto *produtos){
	//Escolher o produto que será atualizado
	int i = pesquisarPorNome (produtos);
	
	if (i >= 0){
		char op;
		cout << "--------- Opções ------------" << endl;
		cout << "n: Alterar Nome" << endl;
		cout << "c: Alterar Custo" << endl;
		cout << "p: Alterar Preço" << endl;
		cout << "e: Alterar Estoque" << endl;
		cout << "-----------------------------" << endl;
		cout << "O que você deseja alterar: ";
		cin >> op;
		
		switch (op){
			case 'n':
				cout << "Informe o novo nome do produto: ";
				cin >> produtos[i].nome;
				break;
			case 'c':
				cout << "Informe o novo custo: ";
				cin >> produtos[i].custo;
				break;
			case 'p':
				cout << "Informe o novo preço: ";
				cin >> produtos[i].preco;
				break;
			case 'e':
				cout << "Informe o novo estoque: ";
				cin >> produtos[i].estoque;
				break;
		}
		cout << "Produto atualizado com sucesso!" << endl;
	} else {
		cout << "O produto desejado não existe na base de dados!";
	}	
}

void imprimirBaseDados (Produto *produtos){
	cout << "----------------------------------" << endl;
	cout << "Nome \t Custo \t Preço \t Estoque" << endl;
	for (int i = 0; i < tamanho; i ++){
		cout << produtos[i].nome << " \t"
			 << produtos[i].custo << " \t"
			 << produtos[i].preco << " \t"
			 << produtos[i].estoque << endl;
	}
	cout << "----------------------------------" << endl;
}

void comprarProduto(Produto *produtos){
	//Escolher o produto que será comprado
	int i = pesquisarPorNome(produtos);
	
	if (i >= 0){
		int quantidade;
		
		do{
			cout << "Quantas unidades você comprou? ";
			cin >> quantidade;
		} while (quantidade < 0);
		
		produtos[i].estoque = produtos[i].estoque + quantidade;
	}
}

void vendaProduto (Produto *produtos){
	//Escolha o produto que deseja vender
	int i = pesquisarPorNome (produtos);
	if (i >= 0){
		int quantidade;
		
		do{
			cout << "Quantas unidades deseja vender? ";
			cin >> quantidade;
		} while (quantidade < 0);
		
		if (produtos[i].estoque >= quantidade){
			produtos[i].estoque = produtos[i].estoque - quantidade;
		} else {
			cout << "Não tem essa quantidade no estoque!";
		}
	}
}


void menuDeOpcoes (){
	cout << "----------------------------------------" << endl;
	cout << "           Quitanda do Victor           " << endl;
	cout << "----------------------------------------" << endl;
	cout << "0 - Criar base de dados (criar vetores)" << endl;
	cout << "1 - Imprimir base de dados" << endl;
	cout << "2 - Inserir produto" << endl;
	cout << "3 - Procurar por nome" << endl;
	cout << "4 - Listar produtos abaixo do estoque" << endl;
	cout << "5 - Atualizar todos os preços" << endl;
	cout << "6 - Atualizar produto" << endl;
	cout << "7 - Comprar produto" << endl;
	cout << "8 - Vender produto" << endl;
	cout << "s - Sair" << endl;
	cout << "----------------------------------------" << endl;
	cout << "Escolha uma opção: ";
}

int main (){
	setlocale (LC_ALL, "Portuguese");
	char opcao = 0;
	
	Produto *vetorProdutos;
	
	do{
		menuDeOpcoes ();
		cin >> opcao;
		int indice;

		switch (opcao){
			case '0':
				tamanho = 0;
				qtd = 0;
				do{
					cout << "-------- Criando base de dados --------" << endl;
					cout << "Informe a quantidade máxima de produtos: ";
					cin >> tamanho;
		
					if (tamanho <= 0){
						cout << "Error - Quantidade invalida" << endl;
					}
				} while (tamanho <= 0);		
				vetorProdutos = new Produto [tamanho];
				break;
			case '1':
				imprimirBaseDados (vetorProdutos);
				break;
			case '2':
				inserirProduto (vetorProdutos);
				break;
			case '3':
				indice = pesquisarPorNome (vetorProdutos);
				break;
			case '4':
				verificaAbaixoEstoque (vetorProdutos);
				break;
			case '5':
				atualizaTodosPrecos (vetorProdutos);
				break;
			case '6':
				atualizarProduto (vetorProdutos);
				break;
			case '7':
				comprarProduto (vetorProdutos);
				break;
			case '8':
				vendaProduto (vetorProdutos);
				break;
			case 's':
				cout << "Obrigado. Volte sempre!" << endl;
				break;
					
		}
	} while (opcao != 's');
	
	return 0;
}
