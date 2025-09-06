#include <iostream>

using namespace std;

int main () 
{
    setlocale(LC_ALL, "");

    int v[5] = {1, 2, 3, 4, 5};
    int *pv;
    pv = v;
    pv = &v[0];

    cout << "endereco da var v: " << &v << endl;
    cout << "conteudo da var pv: " << pv << endl;
    cout << "conteudo de v: " << *v << endl;
    cout << "conteudo de *pv: " << *pv << endl;

    pv++;
    cout << "conteudo de pv++: " << *pv << endl;
    
    *pv = 10;
    cout << "conteudo de *pv = 10: " << v[1] << endl;



    return 0;
}