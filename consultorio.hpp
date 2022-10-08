#ifndef __CONSULTORIO_HPP
#define __CONSULTORIO_HPP

//inicio das atribuições do código
#include<iostream>
using namespace std;
//fim das atribuições

class Consultorio{
private:
    string nome;
    string enderecoconsultorio;
    int telefonedoconsultorio;


    //fim dos atributos da classe
public:

    void cadastrarpaciente();
    bool removerpaciente();

    void cadastrarmedico();
    bool removermedico();

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