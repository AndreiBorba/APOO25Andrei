#include "Program.h"

char Program::showMenu()
{
    char option;
    cout << "====== MENU DE OPCOES ======" << endl;
    cout << "1 - Abrir uma caixa" << endl;
    cout << "2 - Consultar itens" << endl;
    cout << "3 - Sair do programa" << endl;
    cout << "Digite uma opcao:" << endl;
    cin >> option;


    return option;
}

void Program::openBox()
{
}

void Program::showInfo()
{
}

Program::Program()
{
    initialize();
}

Program::~Program()
{
}

void Program::initialize()
{
    nCommons = 0;
    nRares = 0;
    nLegendaries = 0;
}

void Program::run()
{
    char option;

    do {

        option = showMenu();

        switch(option) {
            case '1': // abrir caixa
                cout << "Abrindo uma caixa" << endl;
                break;
            case '2': // consultar item
                cout << "Consultando itens..." << endl;
                break;
            case '3': // sair do programa
                cout << "Saindo do program!" << endl;
                break;
            default: // opção inválida
                cout << "Opcao invalida!" << endl; 
        }




    } while(option != '3');
}

void Program::finish()
{
}
