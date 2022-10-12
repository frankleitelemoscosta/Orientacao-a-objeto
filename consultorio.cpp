//inicio das atribuições do código
#include"consultorio.hpp"
//fim das atribuições

Consultorio::Consultorio()//construtor
{

}

void Consultorio::cadastrarmedico(int crm, string especialidade,string nomedomedico, int cpfdomedico, string enderecodomedico, string identidadedomedico,char sexo,string telefonedomedico)
{
    l.inserir_no_inicio(crm,especialidade,nomedomedico,cpfdomedico,enderecodomedico,identidadedomedico,sexo,telefonedomedico);
}

void Consultorio::imprimirlistademedicos()
{
    l.mostrartodosositens();
}

bool Consultorio::removermedico(int crmremover)
{
    l.remover(crmremover);
}

void Consultorio::cadastrarconsulta(string hora, int cpfpaciente, int CRMmedico,int dia, int mes, int ano)
{
    v.inserir_na_lista(cpfpaciente,CRMmedico,hora,dia,mes,ano);
}

void Consultorio::imprimirconsultas()
{
    v.mostrartodosositens();
}

bool Consultorio::removerconsulta(int cpfpaciente)
{
    v.remover(cpfpaciente);
}

//fim do codigo