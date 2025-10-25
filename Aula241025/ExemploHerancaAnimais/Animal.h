#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal{
    protected:
        string nome;
    
    public:
        Animal(string nome);
        // Para tornar uma classe virtual (abstrata), deve haver ao menos um método virtual
        virtual void fazerSom() = 0;
        // Destrutor virtual
        virtual ~Animal() {};
};

#endif