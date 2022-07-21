/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: victo
 *
 * Created on 28 de Outubro de 2021, 18:38
 */

#include <iostream>
#include <cstdlib>
#include "Roda.h"
#include "Produto.h"
#include "ListaContigua.h"

using namespace std;

int main(int argc, char** argv) {
    Produto p1, p2;
    ListaContigua l1(50);
   
    p1.preencherCampos();
    p2.preencherCampos();
    
    l1.insert (p1, 0);
    l1.insert (p2, 1);
    l1.remove (0);
    l1.imprime();
   
    
    return 0;
}

