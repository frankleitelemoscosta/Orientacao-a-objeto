//inicio das atribuições do código
#include"/home/frank/Documentos/TODOS OS ARQUIVOS(ATIVIDADES, LIVROS, ETC)DA FACULDADE/SEGUNDO PERIODO/PROG2/PRIMEIROTRABALHO/hpp/medico.hpp"
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

int Medico::getcrm()
{
    return this->crm;
}

string Medico::getespecialidade()
{
    return this->especialidade;
}
//fim do código