#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    int opcao;

    while (opcao > 3 || opcao < 1)
    {

        printf("\n-1 opcao 1:");
        printf("\n-2 opcao 2:");
        printf("\n-3 opcao 3:\n");

        //ler a opção
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nOpção 1 foi escolhida");
            break;

        case 2:
            printf("\nOpção 2 foi escolhida");
            break;

        case 3:
            printf("\nOpção 3 foi escolhida");
            break;

        default:
            printf("\nOpção Inválida");
            break;
        }
    }
}