#include "Squirtle.h"

Squirtle::Squirtle(string name, int index) : WaterPokemon(name, index)
{
    cout << "Um pokemon " << this->name << " foi criado!" << endl;
}

void Squirtle::evolve()
{
    string previousName = this->name;

    if (statusEvolution == 0) {
        name = "Wartortle";
        statusEvolution = 1;
        index++;
    }
    else if (statusEvolution == 1) {
        name = "Blastoise";
        statusEvolution = 2;
        index++;
    }
    else {
        cout << "Atingiu o maximo da evolucao da sua especie" << endl;
        return;
    }

    cout << previousName << " evoluiu para " << name << "!" << endl;
}
