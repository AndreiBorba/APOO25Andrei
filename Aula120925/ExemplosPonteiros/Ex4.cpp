#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
    srand(time(0));

    int n;
    cout << "Digite o nro de valores do array: ";
    cin >> n;

    // Alocar um array de inteiros dinamicamente com n elementos
    int *valores = new int[n];

    for (int i=0; i<n; i++)
    {
        valores[i] = rand() % 10 + 1;
        cout << valores[i] << " ";
    }
    cout << endl;
    delete[] valores;

    return 0;
}