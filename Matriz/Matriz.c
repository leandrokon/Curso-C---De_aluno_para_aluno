#include <stdio.h>

int main(void)
{
    /* int matriz[3][3] = {{1, 2, 3,  //definindo a matriz de forma visual.
                         4, 5, 6,
                         7, 8, 9}};
    printf("%d\n", matriz[0][2]);   */

    int matriz[5] [5] = {{0}};  // difine uma matriz de 5 linha e 5 colunas.

    //###############inserindo dados na Matriz.

    printf("Digite os valores da matriz:\n"); //solicita que o usuário digite 25 números.
    for (int i = 0; i <5; i++) {      //inicia um ciclo para percorrer as linhas.
        for (int j = 0; j <5; j++) {  //inicia um ciclo para percorrer as colunas.
            scanf("%d", &matriz[i][j]);//armazena os valores digitados em suas posiçoes na matriz.
        }
    }

    //################Lendo os dados da Matriz.

     for (int m = 0; m <5; m++) {     //inicia um ciclo para percorrer as linhas.
        for (int n = 0; n <5; n++) {  //inicia um ciclo para percorrer as colunas.
            printf("%d- ", matriz[m][n]);//mostra os valores em suas posiçoes na matriz.
        }
        printf("\n"); //quebra de linha após 5 colunas.
    }

}