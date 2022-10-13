//inicio das atribuições do código
#include"paciente.hpp"
//fim das atribuições


Paciente::Paciente()//construtor
{

}

void Paciente::setproximo(Paciente *ponteiro)
{
    this->proximo = ponteiro;
}

Paciente *Paciente::obterproximo()
{
    return proximo;
}

void Paciente::setanterior(Paciente *ponteiro)
{
    this->anterior = ponteiro;
}

void Paciente::setrelato(string relado)
{
    this->relato = relato;
}

string Paciente::getrelato()
{
    return relato;
}

void Paciente::setdataultimaconsulta(string dataultimaconsulta)
{
    this->dataultimaconsulta = dataultimaconsulta;
}

string Paciente::getdataultimaconsulta()
{
    return dataultimaconsulta;
}

void Paciente::setmedicacao(string medicacao)
{
    this->medicacao = medicacao;
}

string Paciente::getmedicacao()
{
    return medicacao;
}

//fim do código