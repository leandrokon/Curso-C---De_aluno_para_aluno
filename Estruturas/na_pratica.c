#include <stdio.h>

struct horario {
    int hora, minuto, segundo; // define a estrutura de modo global.
};

int main (void) {

    void recebeHorario (struct horario list[]); //declara as funções que serão usadas.
    void printHorario (struct horario list[]);

    struct horario listaHorarios[5];  // define um vetor com 5 posições.
    
    recebeHorario (listaHorarios);  // chama as funções.
    printHorario (listaHorarios);

    return 0;
}

void recebeHorario (struct horario list[]) {  // instancia a função que recebe os valores.
    int i;
    for (i = 0; i < 5; i++) {
        printf("Digite o %d horario (hh:mm:ss): ", i + 1);
        scanf("%d:%d:%d",&list[i].hora, &list[i].minuto, &list[i].segundo);
    }
    return 0;
}

void printHorario (struct horario list[]) { 
    int i;                             
    for (i = 0; i < 5; i++) {            // instancia a função que mostra os valores em tela.
        
        printf("O %d horario eh: %d:%d:%d\n", i + 1, list[i].hora, list[i].minuto, list[i].segundo);
    }
    return 0;
}

