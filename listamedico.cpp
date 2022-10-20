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

void Listamedico::inserir_no_inicio(int crm,string especialidade,string nomedomedico, int cpfdomedico, string enderecodomedico, string identidadedomedico,char sexo,string telefonedomedico)
{
    //inicio das variaveis locais
    Medico *novo_no = new Medico();

    Medico *corredor = new Medico();
    corredor = cabeca;

    string sobrenome;
    //fim das variaveis locais

    if(vazia())
    {
        cabeca = novo_no;
        cauda = novo_no;
        cabeca->setanterior(nullptr);
        cabeca->setprox(nullptr);
    }
    else{

        while(corredor)
        {
            if(corredor->getcrm()==crm && corredor->getcpf()==cpfdomedico)
            {
                cout<<"Esse médico ja esta cadastrado"<<endl;
                return;
            }
            else if(corredor->getcrm()==crm)
            {
                cout<<"um medico com o mesmo crm ja foi cadastrado, revise se as informações estão corretas e refaça o cadastro"<<endl;
                return;
            }
            else if(corredor->getcpf()==cpfdomedico)
            {
                cout<<"Um médico cadastrado ja possui esse cpf, revise as informações e refaça o cadastro"<<endl;
                return;
            }
            else if(corredor->getidentidade()==identidadedomedico)
            {
                cout<<"Ja temos um médico com esse mesmo RG, verifique os dados deste médico e refaça o cadastro!"<<endl;
                return;
            }
            else if(corredor->getnome() == nomedomedico && corredor->getcrm() != crm && corredor->getidentidade() != identidadedomedico)
            {
                cout<<"Temos dois médicos com esse mesmo nome, adicione um sobrenome para diferencia-los"<<endl;
                getline(cin,sobrenome);
            
                nomedomedico = nomedomedico + " " + sobrenome;
            }

        }

        novo_no->setprox(cabeca);
        cabeca->setanterior(novo_no);
        novo_no->setanterior(nullptr);

        cabeca = novo_no;
    }
    cabeca->setcrm(crm);
    cabeca->setespecialidade(especialidade);
    cabeca->setnome(nomedomedico);
    cabeca->setcpf(cpfdomedico);
    cabeca->setendereco(enderecodomedico);
    cabeca->setidentidade(identidadedomedico);
    cabeca->setsexo(sexo);
    cabeca->settelefone(telefonedomedico);
}

void Listamedico::mostrartodosositens()
{
    Medico *c = new Medico();
    c = cabeca;

    while(c)
    {
        cout<<"-----------------------------------"<<endl;
        cout<<"Nome do Médico: "<<c->getnome()<<endl;
        cout<<"CPF do médico: "<<c->getcpf()<<endl;
        cout<<"Identidade do médico: "<<c->getidentidade()<<endl;
        cout<<"Endereço do médico: "<<c->getendereco()<<endl;
        cout<<"Telefone: "<<c->gettelefone()<<endl;
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
    int cont1=0,cont2=0;
    //fim das variaveis da função

    while(c)
    {
        if(c->getcrm()==crmremover)
        {
            if(c->obteranterior()!=nullptr)
            {
                a = c->obteranterior();
                cont1++;
            }
            if(c->obterprox()!=nullptr)
            {
                s = c->obterprox();
                cont2++;
            }
            //removendo o nó do c
            if(cont1!=0 && cont2!=0)//aqui é o caso onde pego um nó no meio da lista
            {
                a->setprox(s);

            }else if(cont1!=0 && cont2==0)//aqui é o caso onde pegou um nó final da lista
            {
                a->setprox(nullptr);
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
        c = c->obterprox();
    }
}

//fim do código