#ifndef __CONSULTORIO_HPP
#define __CONSULTORIO_HPP

//inicio das atribuições do código
#include<iostream>
using namespace std;
#include"listamedico.hpp"
#include"listaconsulta.hpp"
#include"listapaciente.hpp"
//fim das atribuições

class Consultorio{
private:
    string nome;
    string enderecoconsultorio;
    int telefonedoconsultorio;
    Listamedico l;
    Listaconsulta v;
    Listapaciente p;

    //fim dos atributos da classe
public:

    Consultorio();

    void cadastrarpaciente(string relato,string medicacao,int cpf,string nome, string endereco, string telefone, char sexo,string identidade);
    bool removerpaciente(string nomedopaciente);

    void cadastrarmedico(int crm,string especialidade,string nomedomedico, int cpfdomedico, string enderecodomedico, string identidadedomedico,char sexo,string telefonedomedico);
    bool removermedico(int crmremover);

    void cadastrarconsulta(string hora, int cpfpaciente, int CRMmedico,int dia, int mes, int ano);
    bool removerconsulta(int cpfpaciente);

    void imprimirlistadepacientes();
    void imprimirconsultas();
    void imprimirconsultasdomedico();
    void imprimirlistademedicos();
    void numerodepacientes();
    
    //fim dos métodos
};

#endif
//fim do código