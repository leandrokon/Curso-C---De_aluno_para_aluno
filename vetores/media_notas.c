#include <stdio.h>

int main(void) {

    float notas[5] = {0};
    float total, media  = 0;
   
    printf("Informe as 5 notas\n");
    for (int i = 0; i <5;i++) {   //percorre cada posição do vetor
        scanf("%f", &notas[i]);   //e atribui os valores digitados a cada posição do vetor. 
    }
    for (int i = 0; i <5; i++) {  //percorre cada posição do vetor e
        total += notas[i];        //soma os valores de cada posição do vetor na variavel total.
    }
    media = total / 5;     // calcula a media das notas.

    if (media > 7) {          // verifica se a média é maior do que 7.
        printf("A media e: %f, esta Aprovado! ", media); //caso for retorna "Aprovado".
    } else {
        printf("A media e: %f, esta Reprovado! ", media); //senão retorna "Reprovado".
    }
   
    return 0;   //FIM
}