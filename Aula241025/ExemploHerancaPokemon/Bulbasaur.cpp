#include "Bulbasaur.h"

Bulbasaur::Bulbasaur(string name, int index) : GrassPokemon(name, index)
{
    cout << "Um pokemon " << this->name << " foi criado!" << endl;
}

void Bulbasaur::evolve()
{
    string previousName = this->name;

    if (statusEvolution == 0) {
        name = "Ivysaur";
        statusEvolution = 1;
        index++;
    }
    else if (statusEvolution == 1) {
        name = "Venusaur";
        statusEvolution = 2;
        index++;
    }
    else {
        cout << "Atingiu o maximo da evolucao da sua especie" << endl;
        return;
    }

    cout << previousName << " evoluiu para " << name << "!" << endl;
}
