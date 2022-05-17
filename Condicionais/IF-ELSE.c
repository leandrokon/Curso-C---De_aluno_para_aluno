#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;                         // cria a variavel idade.h>
    printf("Favor informar idade:\n"); // solicita que o usuario informe a idade.
    scanf("%d", &idade);               // identifica o valor digitado pelo usuário e atribui a variavel idade.

    if (idade < 18)                             // SE
    {                                           // verifica SE a variavel idade é menor que 18.
        printf("Voce nao pode retirar CNH!\n"); // caso seja mostra a menságem.
    }
    else                                       // SENÂO
    {                                          // caso a idade não seja menor que 18
        printf("Voce Ja pode retirar CNH!\n"); // mostra em tela outra menságem.
    }

    return 0;
}