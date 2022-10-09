//inicio das atribuições do código
#include"medico.hpp"
//fim das atribuições

Medico::Medico()//construtor
{

}

void Medico::setcrm(int crm)
{
    this->crm = crm;
}

void Medico::setespecialidade(string especialidade)
{
    this->especialidade = especialidade;
}

void Medico::setprox(Medico *ponteiro)
{
    this->proximo=ponteiro;
}

void Medico::setanterior(Medico *ponteiro)
{
    this->anterior=ponteiro;
}

Medico *Medico::obterprox()
{
    return proximo;
}

Medico *Medico::obteranterior()
{
    return anterior;
}