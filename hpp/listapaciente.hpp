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
    int numerodepacientes;
//fim dos atributos
public:

    Listapaciente();//construtor

    void inserir_na_lista(int cpf, string nome, char sexo,string endereco,string telefone,string identidade);
    void remover(string nome);
    bool vazia();
    void mostrarpaciente(int cpf);

    void pesquisarcpf(int cpf);

    char getresultado();

    void cadastrodadatadaultimaconsulta(int cpf,int dia, int mes, int ano);

    int getnumerodepacientes();

    void mostrarnome(int cpf);

//fim dos métodos
};

#endif