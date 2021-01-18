#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main() {

    //Variavel
    char palavra[255];

    // Instrução
    printf("Digite uma palavra\n");

    //Limpa o Buffer
    setbuf(stdin, 0);

    // Fazer a leitura
    fgets(palavra, 255, stdin);

    // Limpa as casas não utilizadas
    palavra[strlen(palavra)-1] = '\0';

    // Imprima na tela
    printf("\n%s %c", palavra, palavra[strlen(palavra)]); 


    


}