//inicio das atribuições do código
#include"listamedico.hpp"
#include"medico.hpp"
//fim das atribuições

Listamedico::Listamedico()//construtor
{
    cabeca=nullptr;
    cauda=nullptr;
}

bool Listamedico::vazia()
{
    return (cabeca==nullptr);
}

void Listamedico::inserir_no_inicio(int crm,string especialidade)
{
    Medico *novo_no = new Medico();

    if(vazia())
    {
        cabeca = novo_no;
        cauda = novo_no;
        cabeca->setanterior(nullptr);
        cabeca->setprox(nullptr);
    }
    else{
        novo_no->setprox(cabeca);
        cabeca->setanterior(novo_no);
        novo_no->setanterior(nullptr);

        cabeca = novo_no;
    }
    cabeca->setcrm(crm);
    cabeca->setespecialidade(especialidade);
    
}

void Listamedico::mostrartodosositens()
{
    Medico *c = new Medico();
    c = cabeca;

    while(c)
    {
        cout<<"CRM: "<<c->getcrm()<<endl;
        cout<<"Especialidade do Médico: "<<c->getespecialidade()<<endl;
        cout<<"-----------------------------------"<<endl;

        c = c->obterprox();
    }
}

void Listamedico::remover(int crmremover)
{
    //variaveis da função
    Medico *c = new Medico();//essa corre a lista
    Medico *a = new Medico();//essa serve para pegar o nó anterior
    Medico *s = new Medico();//esse serve para pegar o nó sucessor
    c = cabeca;
    //fim das variaveis da função

    while(c)
    {
        if(c->getcrm()==crmremover)
        {
            a = c->obteranterior();
            s = c->obterprox();
            
            //removendo o nó do c
            a->setprox(s);
            s->setanterior(a);

        }
        c = c->obterprox();
    }
}

//fim do código