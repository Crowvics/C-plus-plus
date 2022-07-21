/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Produto.h
 * Author: victo
 *
 * Created on 28 de Outubro de 2021, 20:40
 */

#ifndef PRODUTO_H
#define PRODUTO_H

class Produto {
public:
    Produto();
    Produto(const Produto& orig);
    virtual ~Produto();
    void setCodigo (int Codigo);
    int getCodigo();
    void setEstoque (int Estoque);
    int getEstoque();
    void setCusto (float Custo);
    float getCusto();
    void setPreco (float Preco);
    float getPreco();
    
private:
    int Codigo;
    int Estoque;
    float Custo;
    float Preco;
    
};

#endif /* PRODUTO_H */

