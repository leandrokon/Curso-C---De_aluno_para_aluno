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
    //#############  Declarar estrutura  ######

    struct horario agora; // Declara uma estrutura de TIPO horario e NOME agora.

//#############  Inicializar variáveis da estrutura  ######

    agora.horas = 9;       // inicializa a variável horas com o valor 9.
    agora.minutos = 56;    // inicializa a variável minutos com o valor 56.
    agora.segundos = 25;   // inicializa a variável segundos com o valor 25.

    printf("%d:%d:%d agora\n", agora.horas, agora.minutos, agora.segundos); // mostra os valores na tela.

    struct horario depois; // Declara uma estrutura de TIPO horario e NOME depois.
    
    // operações matemáticas de estruturas com outras estruturas.

    depois.horas = agora.horas + 5;  // Lê o valor de "agora.horas" e adiciona 5 ao valor.
    depois.minutos = agora.minutos - 45;  // Lê o valor de "agora.minutos" e subtrai 45.
    depois.segundos = 50;  // inicializa a variável segundos com o valor 50.

    printf("%d:%d:%d depois\n", depois.horas, depois.minutos, depois.segundos); // mostra os valores na tela.

    return 0;  // FIM
}