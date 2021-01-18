#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <stdbool.h>

using namespace std;

void imprimeVetor(int *vetor, int tam) {

   int i;

   for (i=0; i < tam; i++) {
      printf("%d\n", vetor[i]);
   }

}

void modificaVetor(int *vetor, int tamanho) {
   int i;

   for (i=0; i < tamanho; i++) {
      vetor[i] = vetor[i] + 1;
   }
}

int main() {
   
   int v[3] = {1,2,3};   

   imprimeVetor(v, 3);

   modificaVetor(v, 3);

   imprimeVetor(v, 3);

   return 0;

}

