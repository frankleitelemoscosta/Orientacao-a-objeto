#ifndef __MEDICO_HPP
#define __MEDICO_HPP

//inicio das atribuições
#include<iostream>
using namespace std;
//fim das atribições


class Medico{
private:
    int crm;
    string especialidade;
    Medico *proximo;
    Medico *anterior;
    //fim dos atribuitos
public:

    Medico();//construtor

    void setcrm(int crm);
    int getcrm();

    void setespecialidade(string especialidade);
    string getespecialidade();

    void setprox(Medico *ponteiro);
    Medico *obterprox();
    
    void setanterior(Medico *ponteiro);
    Medico *obteranterior();

    //fim dos métodos
};

#endif
//fim do código
