#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main() {

    // Definindo uma matriz
    int matriz[2][2], i, j;

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    cout << "============= Valores =============\n";

    int pos = 0;
    
    for (int i=0; i<2;i++) {
        if (i == 0) {
            cout << matriz[pos][i] << "\n";
            cout << matriz[pos][i+1] << "\n";
        } else {
            cout << matriz[pos+1][i-1] << "\n";
            cout << matriz[pos+1][i] << "\n";
        }
    }
    

    return 0;
}