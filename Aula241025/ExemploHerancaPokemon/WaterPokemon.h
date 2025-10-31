#ifndef WATER_POKEMON
#define WATER_POKEMON

#include "Pokemon.h"

#include <iostream>
#include <string>

class WaterPokemon : public Pokemon{
    public:
        WaterPokemon(string name, int index);
        virtual void evolve() override;

        void waterGun();
};

#endif