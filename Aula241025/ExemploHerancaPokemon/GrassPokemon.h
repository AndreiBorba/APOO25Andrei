#ifndef GRASS_POKEMON
#define GRASS_POKEMON

#include "Pokemon.h"

#include <iostream>
#include <string>

class GrassPokemon : public Pokemon{
    public:
        GrassPokemon(string name, int index);
        virtual void evolve() override;

        void vineWhip();
};

#endif