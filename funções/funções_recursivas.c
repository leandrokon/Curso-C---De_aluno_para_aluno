#include <stdio.h>

int main(void) {

int calculaFatorial (int x); // declara função que irá calcular fatorial
int numero, fatorial; // declara variaveis locais.

    printf("Digite um numero: "); //solicita ao usuário 2 números.
    scanf("%d", &numero); // armazena os numeros digitados na memória.

    fatorial = calculaFatorial(numero); // chama a função de calculo, atribuindo seu resultado á variável fatorial.

    printf("O fatorial de %d, eh %d\n", numero, fatorial); //mostra o resultado na tela.
    return 0;
}

int calculaFatorial (int x) { //cria instancia de função de calculo
    int resultado; //declara variavel local da função.

    if (x == 0) {            // verifica se o número digitado é igual a zéro
        resultado = 1;       // fatorial de zéro, é sempre 1.
    } else {  //se não for, chama novamente a função, de forma recursiva até que obtenha um resultado.
    
        //vamos supor que usuário digitou o número 5.
        resultado = x * calculaFatorial (x - 1);  //x assume o valor 5.
                  //5 * calculaFatorial (5 - 1);   24 * 5 = 120
                  //4 * calculaFatorial (4 - 1);   6 * 4 = 24
                  //3 * calculaFatorial (3 - 1);   2 * 3 = 6
                  //2 * calculaFatorial (2 - 1);   1 * 2 = 2
                  //1 * calculaFatorial (1 - 1);   1 * 1 = 1
       
        
    }
    return resultado;  // retorna o valor do fatorial.
}