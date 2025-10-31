#ifndef BULBASAUR_H
#define BULBASAUR_H

#include "GrassPokemon.h"

#include <iostream>
#include <string>

class Bulbasaur : public GrassPokemon{
    public:
        Bulbasaur(string name, int index);
        virtual void evolve() override;
};

#endif