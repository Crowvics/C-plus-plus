#include "Produto.h"
#include <string>
#include <iostream>

Produto::Produto(){
    this->nome = " ";
    this->custo = 0.0;
    this->preco = 0.0;
    this->estoque = 0;
}

void Produto::setCusto (float custo){
	this -> custo = custo;
}

float Produto::getCusto(){
    return custo;
}
