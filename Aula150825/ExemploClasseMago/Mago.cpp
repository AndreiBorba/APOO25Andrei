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

Mago::Mago(string nome, int idade, string escolaDeMagia)
{
    this->nome = nome;
    this->idade = idade;
    this->escolaDeMagia = escolaDeMagia;
}

Mago::~Mago()
{
    cout << "Deixou de existir!" << endl;
}

void Mago::setNome(string n)
{
    this->nome = n;
}

void Mago::setIdade(int i)
{
    this->idade = i;
}

void Mago::setEscolaDeMagia(string e)
{
    this->escolaDeMagia = e;
}

string Mago::getNome()
{
    return nome;
}

int Mago::getIdade()
{
    return idade;
}

string Mago::getEscolaDeMagia()
{
    return escolaDeMagia;
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
