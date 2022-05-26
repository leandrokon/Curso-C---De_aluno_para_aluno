#include <stdio.h>

int main(void) {
                                // s -> string  /   sL -> stringLenght
void concatStrings (char s1[], int sL1, char s2[], int sL2, char s3[]);//declara função.

char s1[] = {'P','A','O','-'};  //declara variavel s1, que é um vetor de chars.
int sL1 = 4;                    //declara variavel inteira sL1, que é  o tamanho do vetor s1.
char s2[] = {'M','O','R','T','A','D','E','L','A'};//declara variavel s2, que é um vetor de chars.
int sL2 = 9;                    //declara variavel inteira sL2, que é  o tamanho do vetor s2.
char s3[13];       //declara a variavel s3, que no momento é um vetor vazio, com 13 posições.

concatStrings(s1, sL1, s2, sL2, s3); //chama a função, passando as variáveis como parametro.

int i;                        // variavel de controle.
for (i = 0; i < 13; i++) {    // mostra os itens dentro da variável s3.
    printf("%c", s3[i]);
}
printf("\n"); 

return 0;    
}

//###################################################################

void concatStrings (char s1[], int sL1, char s2[], int sL2, char s3[]) {//instancia da função
    int i, j;                           // variaveis de controle.

    for (i = 0; i < sL1; i++) { // laço que copia os itens de s1 para s3.
        s3[i] = s1[i]; 
    }

    for(j = 0; j < sL2; j++) { // laço que copia os itens de s2 para s3.
        s3[sL1 + j] = s2[j];   
    }
}