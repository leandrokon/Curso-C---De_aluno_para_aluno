#include <stdio.h>
#include <stdlib.h>

int main()
{
  int fatorial = 4;
  int resposta = 1;

  for ( ; fatorial >=1; --fatorial) {
      resposta *= fatorial;
  }

    printf("O numero fatorial eh: %d\n", resposta);
    return 0;
}