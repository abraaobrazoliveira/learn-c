#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    //Permite usar acentos
    setlocale(LC_ALL, "");

    float val1, val2, result;


    printf("Digite o primeiro valor:");
    scanf("%f", &val1);
    printf("\nDigite o segundo valor:");
    scanf("%f", &val2);

    result = (val1 + val2) / 2;

    printf("\nO resultado foi: %f", result);

    if (result > 6) {
       printf("\nO Aluno foi aprovado!"); 
    } else {
        printf("\nO Aluno foi reprovado!");
    }
        

   
}