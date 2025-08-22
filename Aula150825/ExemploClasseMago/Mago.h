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

        // Construtor com parametros  
        Mago(string nome, int idade, string escolaDeMagia);

        // Destrutor
        ~Mago();

        // Especiais (característicos)
        void andar();
        void falar(string msg);
        void invocarMagia();
};