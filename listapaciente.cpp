//inicio das atribuições do código
#include"listapaciente.hpp"
#include <sstream>  // for string streams
#include <string> 
//fim das atribuições

Listapaciente::Listapaciente()
{
    cabeca = nullptr;
    cauda = nullptr;
}

bool Listapaciente::vazia()
{
    return (cabeca==nullptr);
}

void Listapaciente::inserir_na_lista(int cpfpaciente,string nome, char sexo, string endereco,string telefone,string identidade)
{
    Paciente *novo_no = new Paciente();

    //agora jé verificado, se já não existe um paciente com o mesmo nome ou cpf

    Paciente *corredor = new Paciente();
    corredor = cabeca;

    string sobrenome;

    if(vazia())
    {
        cabeca = novo_no;
        cauda = novo_no;
    }
    else{

    while(corredor)
    {
        if(corredor->getnome()==nome && corredor->getcpf()==cpfpaciente)
        {
            cout<<"Esse paciente ja foi cadastrado!"<<endl;
            return ;
        }
        else if(corredor->getcpf()==cpfpaciente)
        {
            cout<<"Esse CPF pertence a: "<<corredor->getnome()<<", e não a: "<<nome<<endl;
            cout<<"Reveja se os dados do pacientes que você quer cadastrar estão corretos!"<<endl;
        }else if(corredor->getcpf()!=cpfpaciente && corredor->getnome()==nome)
        {
            cout<<"Esse nome ja esta na lista de pacientes, porem o cpf do sujeito é diferente, digite um sobrenome para diferenciarmos os infelizes: "<<endl;
            getline(cin,sobrenome);

            nome = nome+" "+sobrenome;
        }

        corredor = corredor->obterproximo();
    }
        cabeca->setanterior(novo_no);
        novo_no->setproximo(cabeca);
        cabeca = novo_no;
        cabeca->setanterior(nullptr);
    }


    cabeca->setcpf(cpfpaciente);
    cabeca->setnome(nome);
    cabeca->setsexo(sexo);
    cabeca->setendereco(endereco);
    cabeca->settelefone(telefone);
    cabeca->setidentidade(identidade);
}

void Listapaciente::mostrartodos()
{
    Paciente *c = new Paciente();
    c = cabeca;

    while(c)
    {
        cout<<"------------------------------------------------"<<endl;
        cout<<"Nome do paciente: "<<c->getnome()<<endl;
        cout<<"CPF: "<<c->getcpf()<<endl;
        cout<<"Se é benina(F) ou benino(M): "<<c->getsexo()<<endl;
        cout<<"Endereço do paciente: "<<c->getendereco()<<endl;
        cout<<"Telefone do paciente: "<<c->gettelefone()<<endl;
        cout<<"Identidade do paciente: "<<c->getidentidade()<<endl;
        cout<<"------------------------------------------------"<<endl;
        c = c->obterproximo();
    }
}

void Listapaciente::tamanho_da_lista()
{
    int tam=0;
    Paciente *contador = new Paciente();
    contador = cabeca;

    while(contador)
    {
        tam++;
        contador = contador->obterproximo();
    }
    cout<<"numero de pacientes: "<<tam<<endl;
}

bool Listapaciente::remover(string nome)
{
    Paciente *c = new Paciente();//essa corre a lista
    Paciente *a = new Paciente();//essa serve para pegar o nó anterior
    Paciente *s = new Paciente();//esse serve para pegar o nó sucessor
    c = cabeca;
    int cont1=0,cont2=0;
    //fim das variaveis da função

    while(c)
    {
        if(c->getnome()==nome)
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

void Listapaciente::pesquisarcpf(int cpf)
{
    Paciente *corredor = new Paciente();
    corredor = cabeca;

    this->resultado = 'F';

    while(corredor)
    {
        if(corredor->getcpf()==cpf)
        {
            this->resultado = 'V';
        }

        corredor = corredor->obterproximo();
    }

}

char Listapaciente::getresultado()
{
    return this->resultado;
}

void Listapaciente::cadastrodadatadaultimaconsulta(int cpf,int dia,int mes, int ano)
{

    ostringstream str1,str2,str3;

    str1 << dia;
    str2 << mes;
    str3 << ano;

    string geek = str1.str();
    string geek2 = str2.str();
    string geek3 = str3.str();


    string data;

    data = geek + "/" + geek2 + "/" + geek3 ;

    cout<<data<<endl;

    Paciente *corredor = new Paciente();
    corredor = cabeca;

    while(corredor)
    {
        if(corredor->getcpf()==cpf)
        {
            corredor->setdataultimaconsulta(data);
        }
        corredor = corredor->obterproximo();
    }

}
//fim do código