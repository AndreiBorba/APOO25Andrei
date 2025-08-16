#include <iostream>
#include <string>

using namespace std;

class Mago {
    // Atributos
    private:
        string nome;
        int idade;
        string escolaDeMagia;

    // Métodos
    public:
        // Construtor padrão
        Mago();

        // Destrutor
        ~Mago();

        // Especiais (característicos)
        void andar();
        void falar(string msg);
        void invocarMagia();
};