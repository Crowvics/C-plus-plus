#include <string>
#include "Pessoa.h"
#include "Nodo.h"

using namespace std;

Nodo::Nodo() {
    this->item;
    this->prox;
}

Nodo::Nodo(Pessoa& p) {
}

Nodo::~Nodo() {
}

void Nodo::setItem(Pessoa& Pessoa) {
    this->item = Pessoa;
}

Pessoa Nodo::getItem() {
    return this->item;
}

void Nodo::setProx(Nodo* head) {
    this->prox = head;
}

Nodo* Nodo::getProx() {
    return this->prox;
}