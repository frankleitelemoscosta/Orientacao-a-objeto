#ifndef __CONSULTA_HPP
#define __CONSULTA_HPP

//inicio das atribuições 
#include<iostream>
using namespace std;
//fim das atribuições do código


class Consulta{
private:
    string hora;
    int cpfpaciente;
    int CRMmedico;
    Consulta *proximo;
    Consulta *anterior;
//fim dos atribuitos da classe
public:

    Consulta();//construtor

    void setproximo(Consulta *ponteiro);
    Consulta *obterproximo();

    void setanterior(Consulta *ponteiro);
    Consulta *obteranterior();

    void sethora(string hora);
    string gethora();

    void setcpfpaciente(int cpfpaciente);
    int getcpfpaciente();

    void setCRMmedico(int CRMmedico);
    int getCRMmedico();

//fim dos métodos da classe
};

#endif
//fim do código