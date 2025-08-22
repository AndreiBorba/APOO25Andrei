#include <iostream>
#include <string>

using namespace std;

class Data {
    private:
        string dia;
        string mes;
        string ano;

    public:
        Data();
        void imprimirData();
        void imprimirDataPorExtenso(string nomeCidade);
};