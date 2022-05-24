#include <stdio.h>

int main(void) {
                                                  //variável de controle do for.
    int vetor[10] = {0, 9, 1, 6, 8, 7, 3, 4, 6, 2, 5}, i; //define um vetor com 10 posições.
    
    void ordemCrescente(int vetor[], int n);  //declara a função que ordena os números.

    ordemCrescente(vetor, 10); // chama a função

    for (i = 0; i < 10; i++) {
        printf("%d", vetor[i]);     //mostra na tela os numeros em ordem.
    }

    return 0;
}

void ordemCrescente (int vetor[], int n) {  //instancia da função.
    int i, j, temp;  // declaração das variáveis locais.

    for(i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {     
            if (vetor[i] > vetor[j]) {   //verifica se a primeira posição do vetor
                temp = vetor[i];         //é maior do que a proxima, se for 
                vetor[i] = vetor[j];     //inverte as posições.
                vetor[j] = temp;
            }
        }
    }
}