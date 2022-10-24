//inicio das atribuições do código
#include<iostream>
#include"consultorio.hpp"
//fim das atribuições

using namespace std;

int main()
{
    //inicio das variaveis locais 
    int opcao, CRM, crmremover, CPFdomedico, cpfpaciente, dia, mes, ano ;
    string nomedomedico, especialidade, telefonedomedico, enderecodomedico, identidadedomedico;
    string horaconsulta,nomepaciente,enderecodopaciente,telefonepaciente,relato,medicacao,dataultimaconsulta,identidadedopaciente;
    Consultorio c;
    char sexo;
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
                
                cin.ignore();//antes de ser adicionado o campo de especialidade era pulado no terminal

                cout<<"Digite o nome do médico"<<endl;
                getline(cin,nomedomedico);

                cout<<"Digite o CPF do médico"<<endl;
                cin>>CPFdomedico;

                cin.ignore();

                cout<<"Digite o telefone do médico"<<endl;
                getline(cin,telefonedomedico);

                cout<<"Digite o endereco do medico"<<endl;
                getline(cin,enderecodomedico);

                cout<<"Digite a especialidade do médico"<<endl;
                getline(cin,especialidade);

                cout<<"Digite o RG do médico"<<endl;
                getline(cin,identidadedomedico);

                cout<<"Me diga: é benina ou é benino, benino(a)?"<<endl;
                cin>>sexo;

                cout<<"Digite o CRM do Médico"<<endl;
                cin>>CRM;


                c.cadastrarmedico(CRM,especialidade,nomedomedico,CPFdomedico,enderecodomedico,identidadedomedico,sexo,telefonedomedico);
            break;
            case 2:

            cin.ignore();

            cout<<"Digite o nome do enfermo"<<endl;
            getline(cin,nomepaciente);

            cout<<"Digite o cpf do paciente"<<endl;
            cin>>cpfpaciente;

            cout<<"Digite o sexo desse paciente"<<endl;
            cin>>sexo;

            cin.ignore();

            cout<<"Digite o endereco do paciente"<<endl;
            getline(cin,enderecodopaciente);

            cout<<"Digite o telefone do paciente"<<endl;
            getline(cin,telefonepaciente);

            cout<<"Digite o relato do paciente"<<endl;
            getline(cin,relato);

            cout<<"Digite a identidade do paciente"<<endl;
            getline(cin,identidadedopaciente);

            c.cadastrarpaciente(relato,medicacao,cpfpaciente,nomepaciente,enderecodopaciente,telefonepaciente,sexo,identidadedopaciente);

            break;
            case 3:

                cout<<"Digite para mim o dia, mes e ano da consulta: "<<endl;
                cin>>dia;
                cin>>mes;
                cin>>ano;

                cin.ignore();

                cout<<"Qual a hora que será efetuada a consulta? "<<endl;
                getline(cin,horaconsulta);

                cout<<"Qual é o cpf do paciente que vai consultar? "<<endl;
                cin>>cpfpaciente;

                cout<<"Qual é o CRM do médico que efetuará a consulta?"<<endl;
                cin>>CRM;

                c.cadastrarconsulta(horaconsulta,cpfpaciente,CRM,dia,mes,ano);

            break;
            case 4:
                cout<<"Digite o CRM do médico que deseja saber os dados"<<endl;
                cin>>CRM;

                c.imprimirlistademedicos(CRM);
            break;
            case 5:
                c.imprimirconsultas();
            break;
            case 6:
                cout<<"Digite o CPF do paciente, para encontra-lo"<<endl;
                cin>>cpfpaciente;

                c.imprimirlistadepacientes(cpfpaciente);
            break;
            case 8:
                cout<<"Digite o CRM do médico"<<endl;
                cin>>crmremover;

                c.removermedico(crmremover);
            break;
            case 9:
                cin.ignore();

                cout<<"Digite o nome do paciente: "<<endl;
                getline(cin,nomepaciente);

                c.removerpaciente(nomepaciente);
            break;
            case 10:
                cout<<"Digite o CPF do pacinte que você deseja excluir a consulta"<<endl;
                cin>>cpfpaciente;

                c.removerconsulta(cpfpaciente);
            break;
            case 12:
                system("clear");
                //system("wls");// se o sistema operacional for windowns basta retirar o comentario desta linha de código
            break;
        }

    }while(opcao!=11);
       //fim do menu

    return 0;
}
//fim