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

        // Getters
        string getNome();
        int getIdade();
        string getEscolaDeMagia();

        // Setters
        void setNome(string n);
        void setIdade(int i);
        void setEscolaDeMagia(string e);

        // Especiais (característicos)
        void andar();
        void falar(string msg);
        void invocarMagia();
};