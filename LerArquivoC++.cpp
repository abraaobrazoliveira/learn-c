#include <fstream>
#include <string>
#include <iostream>


using namespace std;

int main() {

    //Dizer qual arquivo sera lido
    ifstream input("Texto.txt");

    //String que recebera o texto lido
    string textoLido;

    //Passar para a string textoLido
    for (string line; getline(input, line);) {
        textoLido += line+"\n";
    }

    cout << textoLido;

    input.close();

    return 0;
}