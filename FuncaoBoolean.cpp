#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <stdbool.h>

using namespace std;

bool validaIdade(int idade);

int main() {
   int idade;
   printf("Digite sua idade: ");
    scanf("%d", &idade);
   printf("Menor de 18 : %s", validaIdade(idade) ? "Sim" : "Não");
   
   return 0;

}

bool validaIdade(int idade) {
   return idade < 18;
}