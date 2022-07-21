/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaContigua.cpp
 * Author: victo
 * 
 * Created on 13 de Novembro de 2021, 04:29
 */
#include "Produto.h"
#include "ListaContigua.h"
#include <iostream>

using namespace std;

ListaContigua::ListaContigua() {
    this->tam = 0;
    this->quant = 0;
}

ListaContigua::ListaContigua(int tam){
    this->tam = tam;
    this->quant = 0;
    this->lista = new Produto [tam];
}

void ListaContigua::shiftEnd(int index){
    for (int i = quant; i>= index; i--){
        lista[i].copiar(lista[i-1]);
    }
}

void ListaContigua::insert(Produto p, int index){
    if (quant < tam){
        shiftEnd (index);
        lista[index].copiar(p);
        quant ++;
    }else{
        cout << "Lista cheia";
    }
}

void ListaContigua::shiftFront(int index){
    for (int i = index; i < quant - 1; i++){
        lista[i] = lista[i + 1];
    }
}

void ListaContigua::remove(int index){
    if (quant > 0){
        shiftFront (index);
        quant --;
    } else {
        cout << "Lista vazia";
    }
}

void ListaContigua::imprime(){
    for (int i = 0; i <= quant -1; i++){
        lista[i].imprime();
    }
}

ListaContigua::ListaContigua(const ListaContigua& orig) {
}

ListaContigua::~ListaContigua() {
}

