#include "Data.h"
#include <ctime>

Data::Data()
{
}

Data::~Data()
{
}

Data::Data(int d, int m, int a)
{
    dia = d;
    mes = m;
    ano = a;
}

void Data::imprimirData()
{
    // Imprimindo no formato DD/M/AAAA
    cout << dia << "/" << mes << "/" << ano;
}

void Data::imprimirDataPorExtenso(string nomeCidade)
{
    string meses[12] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novemenbro", "dezembro"};

    cout << nomeCidade << ", " << dia << " de " << meses[mes-1] << " de " << ano << ".";
}
