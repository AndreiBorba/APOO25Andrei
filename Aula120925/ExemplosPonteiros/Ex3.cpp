#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
    srand(time(0));

    int *ponteiro = new int;
    *ponteiro = 100;

    cout << "A variavel ponteiro armazena o endereco " << ponteiro << " para uma regiao da memoria que armazena um int." << endl;
    cout << "O valor armazenado nessa regiao de memora e " << * ponteiro << endl;

    delete ponteiro; // Desalocando a regiao de memoria alocada ao ponteiro
    cout << "Agora ponteiro possui o valor " << ponteiro << endl;

    ponteiro = new int[10]; // Aloca dinamicamente uma região em que ficarão 10 inteiros em sequência
                            // ponteiro guarda o endereço para onde está o primeiro endereço
    cout << "A variavel ponteiro agora armazena o endereco " << ponteiro << " para uma regiao da memoria que armazena 10 inteiros em sequencia." << endl;
    
    ponteiro[0] = 200;
    cout << ponteiro[0] << " = " << *ponteiro << endl;

    for(int i=0; i<10; i++)
    {
        ponteiro[i] = rand() % 10 + 1;
        cout << ponteiro[i] << " ";
    }
    cout << endl;
    delete[] ponteiro; // Desaloca toda a regiao de memoria

    cout << ponteiro[3] << endl;

    return 0;
}