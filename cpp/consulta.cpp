//inicio das atribuições do código
#include"/home/frank/Documentos/TODOS OS ARQUIVOS(ATIVIDADES, LIVROS, ETC)DA FACULDADE/SEGUNDO PERIODO/PROG2/PRIMEIROTRABALHO/hpp/consulta.hpp"
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

void Consulta::setdata(int dia, int mes, int ano)
{
    data.setdia(dia);
    data.setmes(mes);
    data.setano(ano);
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

int Consulta::getdata()
{
    cout<<"dia da consulta: "<<data.getdia()<<endl;
    cout<<"mes da consulta: "<<data.getmes()<<endl;
    cout<<"ano da consulta: ";

    return data.getano();
}
//fim dos gets

//fim do código