/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Roda.cpp
 * Author: victo
 * 
 * Created on 28 de Outubro de 2021, 18:44
 */

#include "Roda.h"

Roda::Roda() {
    this->Peso = 0.0;
    this->Raio = 0.0;
    this->Estoque = 0;
    this->MaxPeso = 0.0;
}

Roda::Roda(const Roda& orig) {
}

void Roda::setRaio(float Raio){
    this->Raio = Raio;
}

float Roda::getRaio (){
    return this->Raio;
}

void Roda::setEstoque(int Estoque){
    this->Estoque = Estoque;
}

int Roda::getEstoque (){
    return this->Estoque;
}

void Roda::setPeso(float Peso){
    this->Peso = Peso;
}

float Roda::getPeso (){
    return this->Peso;
}

void Roda::setMaxPeso(float MaxPeso){
    this->MaxPeso = MaxPeso;
}

float Roda::getMaxPeso (){
    return this->MaxPeso;
}


Roda::~Roda() {
}

