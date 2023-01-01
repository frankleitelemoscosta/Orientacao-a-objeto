#ifndef __PESSOA_HPP
#define __PESSOA_HPP

//inicio das atribuições do código
#include<iostream>
using namespace std;
//fim das atribuições do código

class Pessoa{
private:
    string nome,telefone, endereco, identidade;
    char sexo;
    int cpf;
//fim dos atributos
public:

    Pessoa();//construtor

    void setnome(string nome);
    string getnome();

    void settelefone(string telefone);
    string gettelefone();

    void setendereco(string endereco);
    string getendereco();

    void setidentidade(string identidade);
    string getidentidade();

    void setsexo(char sexo);
    char getsexo();

    void setcpf(int CPF);
    int getcpf();

//fim dos métodos
};

#endif
//fim do código