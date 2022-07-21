#pragma once
#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

class Pessoa {
public:
    Pessoa();
    Pessoa(Pessoa& outro);
    virtual ~Pessoa();
    void setCPF(int CPF);
    int getCPF();
    void setIdade(int Idade);
    int getIdade();
    void setSexo(string Sexo);
    string getSexo();
    void setInadimplente(string Inadimplente);
    string getInadimplente();
    void copiar(Pessoa outro);
    void imprime();
    void preencherCampos();

private:
    int CPF;
    int Idade;
    string Sexo;
    string Inadimplente;
};

#endif