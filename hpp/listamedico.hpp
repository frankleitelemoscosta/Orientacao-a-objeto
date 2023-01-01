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
    char resultado;
public:

    Listamedico();//construtor

    void inserir_no_inicio(int crm,string especialidade,string nomedomedico, int cpfdomedico, string enderecodomedico, string identidadedomedico,char sexo,string telefonedomedico);
    
    bool vazia();

    void inserir_no_final();

    void mostrarositens(int crm);

    void remover(int remover);

    void pesquisarcrm(int CRM);

    void pesquisamedico(int CRM);

    char getresultado();

    //fim dos métodos
};

#endif
//fim do código