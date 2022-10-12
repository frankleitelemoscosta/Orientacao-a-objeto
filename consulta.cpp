//inicio das atribuições do código
#include"consulta.hpp"
//fim das atribuições do código

Consulta::Consulta()//construtor
{

}

void Consulta::setproximo(Consulta *ponteiro)
{
    this->proximo=ponteiro;
}

void Consulta::setanterior(Consulta *ponteiro)
{
    this->anterior = ponteiro;
}

Consulta *Consulta::obterproximo()
{
    return proximo;
}

Consulta *Consulta::obteranterior()
{
    return anterior;
}

//inicio dos sets
void Consulta::sethora(string hora)
{
    this->hora = hora;
}


void Consulta::setcpfpaciente(int cpfpaciente)
{
    this->cpfpaciente = cpfpaciente;
}

void Consulta::setCRMmedico(int CRMmedico)
{
    this->CRMmedico = CRMmedico;
}
//fim dos sets

//inicio dos gets
string Consulta::gethora()
{
    return hora;
}

int Consulta::getcpfpaciente()
{
    return cpfpaciente;
}

int Consulta::getCRMmedico()
{
    return CRMmedico;
}
//fim dos gets

//fim do código