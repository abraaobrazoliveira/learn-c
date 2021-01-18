#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int retornaSoma(int n1, int n2);

int main() {

   printf("O valor total foi: %d", retornaSoma(10,20));
   
   return 0;

}

int retornaSoma(int n1, int n2) {
   return n1 + n2;
}