//inicio das atribuições do código
#include"Pessoa.hpp"
//fim das atribuições do código

Pessoa::Pessoa(){//construtor

}

void Pessoa::setnome(string nome)
{
    this->nome = nome;
}

string Pessoa::getnome()
{
    return nome;
}

void Pessoa::setendereco(string endereco)
{
    this->endereco = endereco;
}

string Pessoa::getendereco()
{
    return endereco;
}

void Pessoa::setcpf(int cpf)
{
    this->cpf = cpf;
}

int Pessoa::getcpf()
{
    return cpf;
}


void Pessoa::setsexo(char sexo)
{
    this->sexo = sexo;
}

char Pessoa::getsexo()
{
    return sexo;
}

void Pessoa::setidentidade(string identidade)
{
    this->identidade = identidade;
}

string Pessoa::getidentidade()
{
    return identidade;
}

void Pessoa::settelefone(string telefone)
{
    this->telefone = telefone;
}

string Pessoa::gettelefone()
{
    return telefone;
}

//fim do codigo