#include "MagoBranco.h"

MagoBranco::MagoBranco(string nome, int idade, string escolaDeMagia):Mago(nome, idade, escolaDeMagia)
{
    //MagoBranco::MagoBranco(nome, idade, escolaDeMagia):Mago();
    //this->nome = nome;
    //this->idade = idade;
    //this->escolaDeMagia = escolaDeMagia;
    poderCura = 0;
}

void MagoBranco::lancarCura()
{
    cout << "Estou curando voce!" << endl;
}
