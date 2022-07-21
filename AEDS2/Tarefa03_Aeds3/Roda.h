/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Roda.h
 * Author: victo
 *
 * Created on 28 de Outubro de 2021, 18:44
 */
#ifndef RODA_H
#define RODA_H

class Roda {
public:
    Roda();
    Roda(const Roda& orig);
    virtual ~Roda();
    void setRaio (float Raio);
    float getRaio();
    void setEstoque (int Estoque);
    int getEstoque();
    void setPeso (float Peso);
    float getPeso();
    void setMaxPeso (float MaxPeso);
    float getMaxPeso();
    
private:
    float Raio;
    int Estoque;
    float Peso;
    float MaxPeso;
    
};

#endif /* RODA_H */

