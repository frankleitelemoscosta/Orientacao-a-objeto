#ifndef __DATA_HPP
#define __DATA_HPP

//inicio das atribuições
#include<iostream>
using namespace std;
//fim das atribuições

class Data{
private:
    int dia;
    int mes;
    int ano;
//fim dos atributos
public:

    Data();//construtor

    void setdia(int dia);
    int getdia();

    void setmes(int mes);
    int getmes();

    void setano(int ano);
    int getano();

//fim dos métodos
};

#endif