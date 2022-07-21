#include <iostream>
#include <string>
#include "Encadeada.h"
#include "Nodo.h"
#include "Pessoa.h"

Encadeada::Encadeada() {
	quant = 0;
	head = NULL;
}

Encadeada::Encadeada(Encadeada& outro) {
}


Encadeada::~Encadeada() {
}

void Encadeada::insert() {
	Pessoa p;
	p.preencherCampos();
	Nodo* novo = new Nodo();
	novo->setItem(p);
	novo->setProx(head);
	head = novo;
	quant++;
}

void Encadeada::remove() {
	head = head->getProx();
	quant--;
}

Nodo* Encadeada::getElemento(int n) {
	Nodo* p = head;
	int i = 1;
	while (i <= n - 1 && p->getProx() != NULL) {
		p = p->getProx();
		i++;
	}

	if (i == n) {
		return p;
	}
	else {
		return NULL;
	}
}

void Encadeada::insertPosicao(int n) {
	Pessoa p;
	p.preencherCampos();
	Nodo* novo = new Nodo();
	novo->setItem(p);
	Nodo* anterior = this->getElemento(n - 1);
	novo->setProx(anterior->getProx());
	anterior->setProx(novo);
	quant++;
}

void Encadeada::removePosicao(int n) {
	Nodo* anterior = this->getElemento(n - 1);
	Nodo* saira = anterior->getProx();
	anterior->setProx(saira->getProx());
	quant--;
}