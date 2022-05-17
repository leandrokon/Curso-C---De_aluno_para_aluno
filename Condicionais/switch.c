#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Digite um numero de 1 a 5:\n");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        printf("Primeiro");
        break;
    case 2:
        printf("Segundo");
        break;
    case 3:
        printf("Terceiro");
        break;
    case 4:
        printf("Quarto");
        break;
    case 5:
        printf("Quinto");
        break;
    default:
        printf("Opcao não valida");
        break;
    }
    return 0;
}