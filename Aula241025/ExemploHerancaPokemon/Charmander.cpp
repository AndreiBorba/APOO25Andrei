#include "Charmander.h"

Charmander::Charmander(string name, int index) : FirePokemon(name, index)
{
    cout << "Um pokemon " << this->name << " foi criado!" << endl;
}

void Charmander::evolve()
{
    string previousName = this->name;

    if (statusEvolution == 0) {
        name = "Charmeleon";
        statusEvolution = 1;
    }
    else if (statusEvolution == 1) {
        name = "Charizard";
        statusEvolution = 2;
    }
    else {
        cout << "Atingiu o maximo da evolucao da sua especie" << endl;
    }

    cout << previousName << " evoluiu para " << name << "!" << endl;
}
