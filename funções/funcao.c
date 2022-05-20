#include <stdio.h>

int main(void) {

    float calcAreaRetangulo(float x, float y); //declara a função de calculo dentro da função principal.
    float areaDoRetang = calcAreaRetangulo(10.558, 2558.68956); //chama a função de calculo, passando os dois parametros necessários(dois números float).

    printf("A area e: %.3f\n", areaDoRetang); //mostra na tela o resultado do calculo.

    return 0;
}

float calcAreaRetangulo(float base, float altura) { //função de calculo.
    float area = base * altura;   

    return area; //retorna o resultado para a função principal.
}