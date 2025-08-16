#include "Mago.h"

Mago::Mago()
// Exemplo de inicialização junto à assinatura do método
    //:nome(""),idade(0),escolaDeMagia("")
{
    // Inicialização comum (escolher uma das duas)
    nome="";
    idade=0;
    escolaDeMagia="";

    cout << "Mago criado com o construtor padrão!" << endl;
}

Mago::~Mago()
{
    cout << "Deixou de existir!" << endl;
}

void Mago::andar()
{
    cout << "Estou andando!" << endl;
}

void Mago::falar(string msg)
{
    cout << "Meu nome é " << this->nome << endl;
    cout << msg << endl;
}

void Mago::invocarMagia()
{
    cout << "Invocando magia!" << endl;
}
