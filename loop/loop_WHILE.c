#include <stdio.h>
#include <stdlib.h>

int main()
{
   int contador = 0;

   while (contador <= 10) {           // enquanto contador for menor que 10
       printf("%d\n", contador);      // mostre o valor de contador na tela
       ++contador;                    // e adicione 1 a contador.
   }

    return 0;
}