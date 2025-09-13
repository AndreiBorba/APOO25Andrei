#include <iostream>
#include <ctime>

using namespace std;

struct Ponto
{
    float x, y;
};


int main ()
{
    Ponto P1, P2;
    cout << "Informe as coordenadas x e y de P1: ";
    cin >> P1.x >> P1.y;

    cout << "Informe as coordenadas x e y de P2: ";
    cin >> P2.x >> P2.y;

    int n;
    cout << endl;
    cout << "Informe o nro de pontos totais entre P1 e P2: ";
    cin >> n;

    // Alocar dinamicamente n Pontos em um array
    Ponto *pontos = new Ponto[n+1];

    float deltaT = 1.0 / (float) (n - 1);

    for (int i=0; i < n; i++)
    {
        float ti = i * deltaT;
        pontos[i].x = P1.x + ti * (P2.x - P1.x);
        pontos[i].y = P1.y + ti * (P2.y - P1.y);
        cout << pontos[i].x << " " << pontos[i].y << endl;
    }

    return 0;
}