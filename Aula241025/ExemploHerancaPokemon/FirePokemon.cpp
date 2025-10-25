#include "FirePokemon.h"

FirePokemon::FirePokemon(string name, int index) : Pokemon(name, index)
{
    cout << this->name << " Pokemon tipo fogo" << endl;
}

void FirePokemon::evolve()
{
}

void FirePokemon::burnUp()
{
    cout << "Burning Up!" << endl;
}
