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

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Roda r1, r2;
    Produto p1, p2;
    int v[16];
    
    r1.setRaio(10);
    v[0] = r1.getRaio();
    r1.setEstoque(100);
    v[1] = r1.getEstoque();
    r1.setPeso(14);
    v[2] = r1.getPeso();
    r1.setMaxPeso(1000);
    v[3] = r1.getMaxPeso();
    
    r2.setRaio(20);
    v[4] = r2.getRaio();
    r2.setEstoque(50);
    v[5] = r2.getEstoque();
    r2.setPeso(18);
    v[6] = r2.getPeso();
    r2.setMaxPeso(1500);
    v[7] = r2.getMaxPeso();
    
    p1.setCodigo(012345);
    v[8] = p1.getCodigo();
    p1.setEstoque(100);
    v[9] = p1.getEstoque();
    p1.setCusto(40);
    v[10] = p1.getCusto();
    p1.setPreco(70);
    v[11] = p1.getPreco();
    
    p2.setCodigo(0123456);
    v[12] = p2.getCodigo();
    p2.setEstoque(50);
    v[13] = p2.getEstoque();
    p2.setCusto(80);
    v[14] = p2.getCusto();
    p2.setPreco(140);
    v[15] = p2.getPreco();
    
    
    
    cout << "Programa feito com sucesso!";
    
    return 0;
}

