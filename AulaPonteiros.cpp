#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main() {

   int a = 20;

   cout << "Valor de a: " << a << "\n";

   cout << "Endereço da variavel a: " << &a << "\n";

   int b = 10;

   //Criando um ponteiro
   int *ponteiro;

   ponteiro = &b;

   cout << "Imprimindo o valor de b: " << b << "\n";

   // * pode ser lido como "Conteudo apontado por"

   *ponteiro = 40;
   cout << "Imprimindo o endereço pelo ponteiro b: " << ponteiro << "\n";
   cout << "Imprimindo o valor de b: " << b << "\n";

   return 0;

}