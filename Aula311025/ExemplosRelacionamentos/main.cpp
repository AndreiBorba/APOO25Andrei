#include "Mago.h"
#include "BolaDeFogo.h"

int main(){
    Mago mago;

    BolaDeFogo *bolaDeFogo = new BolaDeFogo;

    mago.lancar(bolaDeFogo);

    return 0;
}