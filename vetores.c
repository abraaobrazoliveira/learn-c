#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

void main() {


    int vetor[TAM];

    for (int i=0; i < TAM; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < TAM; i++)
    {
        printf("\n%d", vetor[i]);
    }
    


}