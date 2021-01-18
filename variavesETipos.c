#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    //Permite usar acentos
    setlocale(LC_ALL, "");

    char nome[256];
    //Lendo char
    printf("Digite uma letra para c: ");
    scanf("%c", &nome);
    printf("\nO valor da letra é: %c\n", nome);
}