#include <stdio.h>

int main(void) {

    char test[] = {'B','R','A','S','I','L'}; //define variável de tipo char como um vetor de caracteres.
    int i; // variável de controle.

    for (i = 0; i < 6; i++) {   // utilizamos um laço for para mostrar cada um dos caracteres
        printf("%c", test[i]);  // formando a palavra "BRASIL".
    }

    return 0; 
}