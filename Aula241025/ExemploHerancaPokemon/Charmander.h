#ifndef CHARMANDER_H
#define CHARMANDER_H

#include "FirePokemon.h"

#include <iostream>
#include <string>

class Charmander : public FirePokemon{
    public:
        Charmander(string name, int index);
        virtual void evolve() override;
};

#endif