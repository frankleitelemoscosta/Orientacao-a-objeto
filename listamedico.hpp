#ifndef __LISTAMEDICO_HPP
#define __LISTAMEDICO_HPP

//inicio das atribuições do código
#include<iostream>
using namespace std;
#include"medico.hpp"
//fim das atribuições

class Listamedico{
private:
    Medico *cabeca;
    Medico *cauda;
public:

    Listamedico();//construtor

    void inserir_no_inicio(int crm,string especialidade);
    bool vazia();
    void inserir_no_final();
    void mostrartodosositens();

    //fim dos métodos
};

#endif
//fim do código