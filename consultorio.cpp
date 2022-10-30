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

void Consultorio::imprimirlistademedicos(int crm)
{
    l.mostrarositens(crm);
}

void Consultorio::removermedico(int crmremover)
{
    l.remover(crmremover);
}

void Consultorio::cadastrarconsulta(string hora, int cpfpaciente, int CRMmedico,int dia, int mes, int ano)
{
    l.pesquisarcrm(CRMmedico);
    p.pesquisarcpf(cpfpaciente);
    
    if(l.getresultado()=='V' && p.getresultado()=='V')
    {

        v.inserir_na_lista(cpfpaciente,CRMmedico,hora,dia,mes,ano);
        p.cadastrodadatadaultimaconsulta(cpfpaciente,dia,mes,ano);

    }else if(l.getresultado()=='F' || p.getresultado()=='F')
    {
        cout<<"Ou esse médico não trabalha aqui, ou esse paciente\nnão foi cadastrado, verifique no sistema e refaça o cadastro"<<endl;
        return;
    }
}

void Consultorio::imprimirconsultas()
{
    v.mostrartodosositens();
}

void Consultorio::removerconsulta(int cpfpaciente)
{
    v.remover(cpfpaciente);
}

void Consultorio::cadastrarpaciente(string relato,string medicacao,int cpf,string nome, string endereco, string telefone, char sexo,string identidade)
{
    p.inserir_na_lista(cpf,nome,sexo,endereco,telefone,identidade);
    numerodepacientes();
}

void Consultorio::imprimirlistadepacientes(int cpf)
{
    p.mostrarpaciente(cpf);
}

void Consultorio::numerodepacientes()
{
  cout<<"Numero de pacientes: "<<p.getnumerodepacientes()<<endl;
}

void Consultorio::removerpaciente(string nomedopaciente)
{
    p.remover(nomedopaciente);
}

void Consultorio::pesquisaconsulta(int cpf,int crm,string hora)
{
    p.mostrarnome(cpf);
    v.procuradaconsulta(cpf,hora);
    l.pesquisamedico(crm);
}

//fim do codigo