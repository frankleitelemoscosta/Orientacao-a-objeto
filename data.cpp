//inicio das atribuições do código
#include"data.hpp"
//fim das atribuições

Data::Data()//construtor
{

}

void Data::setdia(int dia)
{
    this->dia = dia;
}

int Data::getdia()
{
    return dia;
}

void Data::setmes(int mes)
{
    this->mes = mes; 
}

int Data::getmes()
{
    return mes;
}

void Data::setano(int ano)
{
    this->ano = ano;
}

int Data::getano()
{
    return ano;
}

//fim do código