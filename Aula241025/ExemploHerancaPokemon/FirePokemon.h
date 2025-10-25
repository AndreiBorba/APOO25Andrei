#ifndef FIRE_POKEMON_H
#define FIRE_POKEMON_H

#include "Pokemon.h"

#include <iostream>
#include <string>

class FirePokemon : public Pokemon{
    public:
        FirePokemon(string name, int index);
        virtual void evolve() override;

        void burnUp();
};

#endif