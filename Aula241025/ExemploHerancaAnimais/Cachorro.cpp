#include "Cachorro.h"

Cachorro::Cachorro(string nome) : Animal(nome)
{
    cout <<  this->nome << " foi criado!" << endl;
}

void Cachorro::fazerSom()
{
    cout << "-" << this->nome << ": AU AU!" << endl;
}
