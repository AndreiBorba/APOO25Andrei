#include "Mago.h"

int main()
{
    // Instanciando um objeto da classe mago utilizando o construtor padrão
    Mago mago;

    // Invocando os métodos
    //mago.andar();
    //mago.falar("Olá Mundo!");
    //mago.invocarMagia();

    // Instanciando um objeto da classe mago utilizando o construtor com parâmetros
    Mago mago2("Andrei", 24, "Hogwarts");
    Mago mago3("Gandalf", 300, "Mordor");

    // Invocando os métodos de cada objeto instanciado - Mago2
    mago2.andar();
    mago2.falar("Olá2!");
    mago2.invocarMagia();

    // Invocando os métodos de cada objeto instanciado - Mago3
    mago3.andar();
    mago3.falar("Olá3!");
    mago3.invocarMagia();

    // Invocando os métodos de getters
    cout << mago2.getNome() << endl;
    cout << mago3.getNome() << endl;

    // Criando lógica de comparação de idade
    int menorIdade;
    string maisNovo;

    if (mago2.getIdade() < mago3.getIdade())
    {
        menorIdade = mago2.getIdade();
        maisNovo = mago2.getNome();
    }
    else if (mago2.getIdade() == mago3.getIdade())
    {
        menorIdade = mago2.getIdade();
        maisNovo = mago2.getNome() + mago3.getNome();
    }
    else
    {
        menorIdade = mago3.getIdade();
        maisNovo = mago3.getNome();
    }

    // Comando para aguardar uma tecla ser pressionada e manter o codigo no terminal
    //getchar();

    return 0;
}