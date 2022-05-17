#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Favor informar idade:\n");
    scanf("%d", &idade);

    if (idade <= 5)
    {
        printf("Bebe\n");
    }
    else if (idade > 5 && idade <= 12)
    {
        printf("Criança\n");
    }
    else if (idade > 12 && idade <= 18)
    {
        printf("Adolescente\n");
    }
    else
    {
        printf("Adulto\n");
    }
    return 0;
}