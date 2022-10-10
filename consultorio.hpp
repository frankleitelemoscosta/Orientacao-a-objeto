#ifndef __CONSULTORIO_HPP
#define __CONSULTORIO_HPP

//inicio das atribuições do código
#include<iostream>
using namespace std;
#include"listamedico.hpp"
//fim das atribuições

class Consultorio{
private:
    string nome;
    string enderecoconsultorio;
    int telefonedoconsultorio;
    Listamedico l;

    //fim dos atributos da classe
public:

    Consultorio();

    void cadastrarpaciente();
    bool removerpaciente();

    void cadastrarmedico(int crm,string especialidade,string nomedomedico, int cpfdomedico, string enderecodomedico, string identidadedomedico,char sexo,string telefonedomedico);
    bool removermedico(int crmremover);

    void cadastrarconsulta();
    bool removerconsulta();

    void imprimirlistadepacientes();
    void imprimirconsultas();
    void imprimirconsultasdomedico();
    void imprimirlistademedicos();
    
    //fim dos métodos
};

#endif
//fim do código