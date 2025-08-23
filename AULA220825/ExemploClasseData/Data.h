#include <iostream>
#include <string>

using namespace std;

class Data {
    private:
        int dia, mes, ano;

    public:
        Data();

        ~Data();

        Data(int d, int m, int a);

        void imprimirData();
        void imprimirDataPorExtenso(string nomeCidade);
};