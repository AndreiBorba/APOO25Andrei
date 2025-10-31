#include "Charmander.h"
#include "Bulbasaur.h"
#include "Squirtle.h"

int main() {

    cout << "############# POKEMON GRAMA #############" <<  endl;
    Bulbasaur bulbasaur("Bulbasaur", 1);
    bulbasaur.vineWhip();
    bulbasaur.evolve();
    bulbasaur.evolve();
    bulbasaur.evolve();

    cout << "############# POKEMON FOGO #############" <<  endl;
    Charmander charmander("Charmander", 4);
    charmander.burnUp();
    charmander.evolve();
    charmander.evolve();
    charmander.evolve();

    cout << "############# POKEMON AGUA #############" <<  endl;
    Squirtle squirtle("Squirtle", 7);
    squirtle.waterGun();
    squirtle.evolve();
    squirtle.evolve();
    squirtle.evolve();
    
    return 0;
}