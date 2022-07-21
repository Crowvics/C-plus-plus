#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa() {
    this->CPF = 0;
    this->Idade = 0;
    this->Sexo = " ";
    this->Inadimplente = " ";
}

Pessoa::Pessoa(Pessoa& outro) {
    this->CPF = outro.getCPF();
    this->Idade = outro.getIdade();
    this->Sexo = outro.getSexo();
    this->Inadimplente = outro.getInadimplente();
}

void Pessoa::setCPF(int CPF) {
    this->CPF = CPF;
}

int Pessoa::getCPF() {
    return this->CPF;
}

void Pessoa::setIdade(int Idade) {
    this->Idade = Idade;
}

int Pessoa::getIdade() {
    return this->Idade;
}

void Pessoa::setSexo(string Sexo) {
    this->Sexo = Sexo;
}

string Pessoa::getSexo() {
    return this->Sexo;
}

void Pessoa::setInadimplente(string Inadimplente) {
    this->Inadimplente = Inadimplente;
}

string Pessoa::getInadimplente() {
    return this->Inadimplente;
}

void Pessoa::copiar(Pessoa outro) {
    this->CPF = outro.getCPF();
    this->Idade = outro.getIdade();
    this->Sexo = outro.getSexo();
    this->Inadimplente = outro.getInadimplente();
}

void Pessoa::imprime() {
    cout << "CPF: " << this->CPF << endl;
    cout << "Idade: " << this->Idade << endl;
    cout << "Sexo: " << this->Sexo << endl;
    cout << "Inadimplente: " << this->Inadimplente << endl;
}

void Pessoa::preencherCampos() {
    cout << "Informe o CPF: ";
    cin >> this->CPF;
    cout << "Informe a idade: ";
    cin >> this->Idade;
    cout << "Informe o sexo: ";
    cin >> this->Sexo;
    cout << "Informe se a pessoa é inadimplente: ";
    cin >> this->Inadimplente;
}

Pessoa::~Pessoa() {
}
