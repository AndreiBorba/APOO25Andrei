#ifndef MAGO_H
#define MAGO_H

#include "Magia.h"
#include "BolaDeFogo.h"

#include <iostream>
#include <string>

class Mago {
public:
    inline Mago() {};
    // Exemplo 1: Recebendo a magia como parâmetro
    void lancar(Magia* magia) {
        std::cout << "Mago prepara o feitiço..." << std::endl;
        magia->executar();
    }
    
    // Exemplo 2: Instanciando a magia localmente
    void lancarBolaDeFogo() {
        BolaDeFogo bola; // Criada na pilha
        std::cout << "Mago cria uma bola de fogo..." << std::endl;
        bola.executar();
    } // 'bola' é destruída aqui
};

#endif