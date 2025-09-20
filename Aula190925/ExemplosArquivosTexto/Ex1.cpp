// Exemplo basico de escrita de arquivo utilizando ofstream
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Criação de uma variável para usar uma stream de saída de arquivo
    ofstream outputFile;
    outputFile.open("output.txt");

    if (outputFile.is_open())
    {

        // Adiciona as informações no arquivo
        outputFile << "Ola Mundo!" << endl;

        float Pi = 3.14;
        int a = 100;
        outputFile << Pi << " " << a << " " << endl;

        outputFile.close();

        cout << endl << "Arquivo output.txt criado com sucesso!" << endl;
    }
    else
    {
        cout << endl << "Arquivo output.txt nao pode ser aberto para escrita" << endl;
    }


    return 0;
}