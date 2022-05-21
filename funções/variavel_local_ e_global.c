#include <stdio.h>
     //usa-se o "g" antes da variavel apenas para sinalizar uma variável global.
int gVariavelGlobal = 2;   //variável que pode ser lida por todas as funçoes em aualquer parte do código.

// A variável global sempre se comportará como uma variável estática.

int main(void) {         //instancia da função principal.

    void teste(void);    //declara a função "teste".

    printf("Global: %i\n", gVariavelGlobal); // chama a variavel global mesmo estando fora do seu escopo.

    teste();             //chama a função "teste".
    teste();
    teste();

    return 0;
}

void teste(void) {                         //instancia da função "teste".

// variável local por ser possivel ler a mesma apenas dentro da função em que ela se encontra.
// automatica pois toda ves que é chamada ela é recriada.
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;


// estática - não é recriada, ou seja armazena o valor que possuia na chamada anterior.
    static int variavelLocalEstatica = 2;   //utiliza-se o comando "static" na frente da variável.
    variavelLocalEstatica *= 2;

    printf("Local Automatica: %i\n", variavelLocalAutomatica);
    printf("Local Estatica: %i\n", variavelLocalEstatica);
    printf("Global: %i\n", gVariavelGlobal); // chama a variavel global mesmo estando fora do seu escopo.
}