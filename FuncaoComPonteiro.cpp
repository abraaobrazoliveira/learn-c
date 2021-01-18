#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <stdbool.h>

using namespace std;

void aumentaDez(int *num);

int main() {
   
   int a = 5;

   aumentaDez(&a);

   printf("O valor de a é: %d", a);

   return 0;

}

void aumentaDez(int *num) {
   *num += 10;
}