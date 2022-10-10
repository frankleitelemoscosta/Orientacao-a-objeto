//inicio das atribuições do código
#include"consultorio.hpp"
//fim das atribuições

Consultorio::Consultorio()//construtor
{

}

void Consultorio::cadastrarmedico(int crm, string especialidade)
{
    l.inserir_no_inicio(crm,especialidade);
}

void Consultorio::imprimirlistademedicos()
{
    l.mostrartodosositens();
}

bool Consultorio::removermedico(int crmremover)
{
    l.remover(crmremover);
}

//fim do codigo