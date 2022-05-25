#include <stdio.h>

//#############  Definir estrutura  ######

struct horario  // Define uma estrutura do TIPO horario. Sendo GLOBAL, ou seja, pode ser lida em qualquer parte do código.
{
    int horas, minutos, segundos; //essa estrutura pode armazenar variáveis de todos os tipos (int - bolean- char- float- double). Além de vetores e arrays.
    // char test;
    // float decimal;
};

int main(void)
{
    //#############  Declarar função  ######

    struct horario teste(struct horario nomeQualquer); // declara uma função, recebendo uma struct como parametro.

    //#############  Declarar estrutura  ######

    struct horario agora; // Declara uma estrutura de TIPO horario e NOME agora.

//#############  Inicializar variáveis da estrutura  ######

    agora.horas = 9;       // inicializa a variável horas com o valor 9.
    agora.minutos = 56;    // inicializa a variável minutos com o valor 56.
    agora.segundos = 25;   // inicializa a variável segundos com o valor 25.

    printf("%d:%d:%d agora\n", agora.horas, agora.minutos, agora.segundos); // mostra os valores na tela.

    struct horario proxima;
    proxima = teste(agora);

    printf("%d:%d:%d valores alterados pela funcao\n", proxima.horas, proxima.minutos, proxima.segundos); // mostra os valores na tela.

    return 0;  
}

 struct horario teste(struct horario nomeQualquer){ //instancia da função. que retorna outra estrutura.


    printf("%d:%d:%d valores passados pra dentro da funcao\n", nomeQualquer.horas, nomeQualquer.minutos, nomeQualquer.segundos); // mostra os valores na tela.

    nomeQualquer.horas = 14;         // inicializa a variável horas com o valor 14.
    nomeQualquer.minutos = 11;       // inicializa a variável minutos com o valor 11.
    nomeQualquer.segundos = 14;      // inicializa a variável segundos com o valor 14.

    return nomeQualquer;
 }