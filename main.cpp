//inicio das atribuições do código
#include<iostream>
//fim das atribuições

using namespace std;

int main()
{
    //inicio das variaveis locais 
    int opcao;
    string nomedomedico;
    //fim das variaveis locais

    //menu para o usuário 
    do{
        cout<<"|------------------------------MENU-------------------------------|"<<endl;
        cout<<"|1-Cadastrar um medico                                            |"<<endl;
        cout<<"|2-Cadrastar um paciente                                          |"<<endl;
        cout<<"|3-Cadrastar uma consulta                                         |"<<endl;
        cout<<"|4-Imprimir dados de um medico                                    |"<<endl;
        cout<<"|5-Imprimir consultas                                             |"<<endl;
        cout<<"|6-Imprimir dados do paciente                                     |"<<endl;
        cout<<"|7-Imprimir data e hora, paciente e medico de consulta especifico |"<<endl;
        cout<<"|8-Remover mèdico                                                 |"<<endl;
        cout<<"|9-Remover paciente                                               |"<<endl;
        cout<<"|10-Remover consulta                                              |"<<endl;
        cout<<"|11-Sair do programa                                              |"<<endl;
        cout<<"|12-Limpar a tela                                                 |"<<endl;
        cin>>opcao;

        switch(opcao){
            case 1:
                cout<<"Digite o nome do médico"<<endl;
                getline(cin,nomedomedico);
            
            break;
            case 12:
                system("clear");
                //system("wls");// se o sistema operacional for windowns basta retirar o comentario desta linha de código
            break;
        }

    }while(opcao!=12);
    //fim do menu

    return 0;
}
//fim