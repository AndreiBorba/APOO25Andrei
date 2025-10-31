#ifndef SQUIRTLE_H
#define SQUIRTLE_H

#include "WaterPokemon.h"

#include <iostream>
#include <string>

class Squirtle : public WaterPokemon{
    public:
        Squirtle(string name, int index);
        virtual void evolve() override;
};

#endif