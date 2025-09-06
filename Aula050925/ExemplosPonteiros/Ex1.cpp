#include <iostream>

using namespace std;

int main () 
{
    setlocale(LC_ALL, "");

    int numero = 100;
    int *ponteiro = &numero;

    //OU
    // int n, *pn; -> declara o int n e o seu ponteiro (pn) na mesma linha

    cout << "valor do numero " << numero << endl;
    cout << "valor do endereco do numero " << &ponteiro << endl;

    cout << "conteudo do ponteiro " << ponteiro << endl;
    cout << "valor do endereco do ponteiro " << &ponteiro << endl;
    cout << "valor de desreferenciacao " << *ponteiro << endl;


    return 0;
}