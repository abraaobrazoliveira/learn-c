#include <fstream>
#include <string>
#include <iostream>


using namespace std;

int main() {

    ofstream meuArquivo;

    meuArquivo.open("TextoLimpo.txt");

    // //Esvaziar o arquivo
    // meuArquivo << "";

    //Fecha o arquivo
    meuArquivo.clear();

    meuArquivo.close();
   

    return 0;
}