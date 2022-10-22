#ifndef __LISTACONSULTA_HPP
#define __LISTACONSULTA_HPP

//inicio das atribuições do código
#include"consulta.hpp"
//fim das atribuições


class Listaconsulta{
private:
    Consulta *cabeca;
    Consulta *cauda;
//fim dos atributos
public:
    Listaconsulta();//construtor

    void inserir_na_lista(int cpfpaciente,int CRMmedico,string hora,int dia, int mes, int ano);
    bool vazia();
    bool remover(int cpfpaciente);
    void mostrartodosositens();

//fim das atribuições
};


#endif