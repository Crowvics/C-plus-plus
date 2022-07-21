#pragma once
#ifndef ENCADEADA_H
#define ENCADEADA_H
#include <string>
#include "Nodo.h"

using namespace std;

class Encadeada {
public:
	Encadeada();
	Encadeada(Encadeada& outro);
	virtual ~Encadeada();
	void remove();
	void insert();
	void insertPosicao(int n);
	void removePosicao(int n);
	Nodo* getElemento(int n);


private:
	int quant;
	Nodo* head;
};

#endif