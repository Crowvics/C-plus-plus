#pragma once
#ifndef NODO_H
#define NODO_H
#include "Pessoa.h"
#include <string>

class Nodo {
public:
	Nodo();
	Nodo(Pessoa& p);
	virtual ~Nodo();
	Pessoa getItem();
	void setItem(Pessoa& p);
	Nodo* getProx();
	void setProx(Nodo* head);

private:
	Pessoa item;
	Nodo* prox;

};

#endif