//inicio das atribuições do código
#include"listaconsulta.hpp"
//fim das atribuições

Listaconsulta::Listaconsulta()
{
    cabeca = nullptr;
    cauda = nullptr;
}

bool Listaconsulta::vazia()
{
    return (cabeca==nullptr);
}

void Listaconsulta::inserir_na_lista(int cpfpaciente,int CRMmedico,string hora,int dia, int mes, int ano)
{
    Consulta *novo_no = new Consulta();

    if(vazia())
    {
        cabeca = novo_no;
        cauda = novo_no;
    }
    else{
        cabeca->setanterior(novo_no);
        novo_no->setproximo(cabeca);
        cabeca = novo_no;
        cabeca->setanterior(nullptr);
    }
    cabeca->setcpfpaciente(cpfpaciente);
    cabeca->setCRMmedico(CRMmedico);
    cabeca->sethora(hora);
    cabeca->setdata(dia,mes,ano);
}

void Listaconsulta::mostrartodosositens()
{
    Consulta *c = new Consulta();
    c = cabeca;

    while(c)
    {
        cout<<"------------------------------------------------"<<endl;
        cout<<"Data da consulta: "<<c->getdata()<<endl;//o erro é gerado aqui
        cout<<"Hora da consulta: "<<c->gethora()<<endl;
        cout<<"CRM do médico que atenderá o paciente: "<<c->getCRMmedico()<<endl;
        cout<<"cpf do paciente: "<<c->getcpfpaciente()<<endl;
        cout<<"------------------------------------------------"<<endl;
        c = c->obterproximo();
    }
}

void Listaconsulta::remover(int cpfpaciente)
{
    Consulta *c = new Consulta();//essa corre a lista
    Consulta *a = new Consulta();//essa serve para pegar o nó anterior
    Consulta *s = new Consulta();//esse serve para pegar o nó sucessor
    c = cabeca;
    int cont1=0,cont2=0;
    //fim das variaveis da função

    while(c)
    {
        if(c->getcpfpaciente()==cpfpaciente)
        {
            if(c->obteranterior()!=nullptr)
            {
                a = c->obteranterior();
                cont1++;
            }
            if(c->obterproximo()!=nullptr)
            {
                s = c->obterproximo();
                cont2++;
            }
            //removendo o nó do c
            if(cont1!=0 && cont2!=0)//aqui é o caso onde pego um nó no meio da lista
            {
                a->setproximo(s);

            }else if(cont1!=0 && cont2==0)//aqui é o caso onde pegou um nó final da lista
            {
                a->setproximo(nullptr);
            }
            if(cont2!=0 && cont1!=0)//aqui é um caso no meio da lista
            {
                s->setanterior(a);

            }else if(cont2!=0  && cont1==0)//aqui é um caso no inicio da lista
            {
                s->setanterior(nullptr);
                cabeca = s;
            }
            if(cont1==0 && cont2==0)///caso onde tem se apenas um elemento
            {
                cabeca = nullptr;
                cauda = nullptr;
            }
            cont1=0;
            cont2=0;
        }
        c = c->obterproximo();
    }
}

void Listaconsulta::procuradaconsulta(int cpf, string hora)
{
    Consulta *corredor = new Consulta();
    corredor = cabeca;

    while(corredor)
    {
        if(corredor->getcpfpaciente()==cpf && corredor->gethora()==hora)
        {
            cout<<"Na data: "<<corredor->getdata()<<endl;
            cout<<"As: "<<corredor->gethora()<<endl;
        }
        corredor = corredor->obterproximo();
    }
}

//fim do código