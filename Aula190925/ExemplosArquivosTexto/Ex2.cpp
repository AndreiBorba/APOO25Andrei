// Exemplo basico de leitura de arquivo utilizando ofstream
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inputFile;
    inputFile.open("output.txt");

    // Buscando arquivo que está em outro diretório
    // inputFile.open("../pastaExemplo/output.txt"); // Voltando um nível no diretório
    // inputFile.open("pastaExemplo/output.txt"); // Subindo um nível no diretório

    if (inputFile.is_open())
    {   
        string str1, str2;
        float f;
        int i;
        cout << endl << "Arquivo aberto com sucesso!" << endl;

        inputFile >> str1 >> str2 >> f >> i;
        cout << endl << "Dados do arquivo: " << endl << str1 << endl << str2 << endl << f << endl << i  << endl;

        inputFile.close();
    }
    else
    {
        cout << endl << "Arquivo nao foi encontrado!" << endl;
    }

    return 0;
}