#ifndef BOLA_DE_FOGO
#define BOLA_DE_FOGO

#include "Magia.h"

#include <iostream>
#include <string>

using namespace std;

class BolaDeFogo : public Magia {
public:
    inline BolaDeFogo() {};
    void executar() override {
        std::cout << "Bola de Fogo explode!" << std::endl;
    }
};

#endif