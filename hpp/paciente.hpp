#ifndef __PACIENTE_HP
#define __PACIENTE_HP

//inicio das atribuições
#include<iostream>
using namespace std;
#include"Pessoa.hpp"
//fim das atribuições

class Paciente: public Pessoa{
private:

    string relato;
    string dataultimaconsulta;
    string medicacao;
    Paciente *proximo;
    Paciente *anterior;

//fim dos atributos
public:

    Paciente();//construtor

    void setproximo(Paciente *ponteiro);
    Paciente *obterproximo();

    void setanterior(Paciente *ponteiro);
    Paciente *obteranterior();

    void setrelato(string relato);
    string getrelato();

    void setdataultimaconsulta(string dataultimaconsulta);
    string getdataultimaconsulta();

    void setmedicacao(string medicacao);
    string getmedicacao();

//fim dos métodos
};

#endif

//fim do código