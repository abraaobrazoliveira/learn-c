#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <string>
#include <iostream>


using namespace std;

int main() {

    // Criar um cursor que vai percorrer cada letra do arquivo
    int c;
    char conteudoTexto[255];

    //Arquivo a ser lido
    FILE *file;

    //Abre o arquivo no diretório escolhido
    file = fopen("Texto.txt", "r");

    //Se o arquivo foi encontrado
    if (file) {
        //Criar o contador
        int cont;
        //enquanto encontrar letra imprima ela na tela
        while((c = getc(file)) != EOF) {

            conteudoTexto[cont] = c;    

            // Imprime na tela
            printf("%c", c);

            cont++;
        }
        printf("\n\n==================");
        for (int i=0; i<strlen(conteudoTexto); i++) {
           printf("%c", conteudoTexto[i]); 
        }

        //Fecha o arquivo
        fclose(file);
    }

    return 0;
}