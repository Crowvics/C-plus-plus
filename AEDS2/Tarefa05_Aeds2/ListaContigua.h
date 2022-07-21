/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaContigua.h
 * Author: victo
 *
 * Created on 13 de Novembro de 2021, 04:29
 */
#include "Produto.h"
#ifndef LISTACONTIGUA_H
#define LISTACONTIGUA_H

class ListaContigua {
public:
    ListaContigua();
    ListaContigua(int tam);
    ListaContigua(const ListaContigua& orig);
    virtual ~ListaContigua();
    void shiftEnd (int index);
    void insert (Produto p, int index);
    void shiftFront (int index);
    void remove (int index);
    void imprime();
private:
    int tam;
    int quant;
    Produto *lista;
};

#endif /* LISTACONTIGUA_H */

