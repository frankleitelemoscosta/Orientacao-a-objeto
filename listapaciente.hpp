#ifndef __LISTAPACIENTE_HPP
#define __LISTAPACIENTE_HPP

//inicio das atribuições
#include<iostream>
using namespace std;
#include"paciente.hpp"
//fim das atribbuições

class Listapaciente{
private:

    Paciente *cabeca;
    Paciente *cauda;
    char resultado;
//fim dos atributos
public:

    Listapaciente();//construtor

    void inserir_na_lista(int cpf, string nome, char sexo,string endereco,string telefone,string identidade);
    bool remover(string nome);
    bool vazia();
    void mostrartodos();
    void tamanho_da_lista();

    void pesquisarcpf(int cpf);

    char getresultado();

    void cadastrodadatadaultimaconsulta(int cpf,int dia, int mes, int ano);

//fim dos métodos
};

#endif