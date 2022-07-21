/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Produto.cpp
 * Author: victo
 * 
 * Created on 28 de Outubro de 2021, 20:40
 */

#include "Produto.h"

Produto::Produto() {
    this->Codigo = 0;
    this->Estoque = 0;
    this->Custo = 0.0;
    this->Preco = 0.0;
}

Produto::Produto(const Produto& orig) {
}

void Produto::setCodigo(int Codigo){
    this->Codigo = Codigo;
}

int Produto::getCodigo (){
    return this->Codigo;
}

void Produto::setEstoque(int Estoque){
    this->Estoque = Estoque;
}

int Produto::getEstoque (){
    return this->Estoque;
}

void Produto::setCusto(float Custo){
    this->Custo = Custo;
}

float Produto::getCusto (){
    return this->Custo;
}

void Produto::setPreco(float Preco){
    this->Preco = Preco;
}

float Produto::getPreco (){
    return this->Preco;
}

Produto::~Produto() {
}

