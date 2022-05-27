#include <stdio.h>

int numberOfCharacters = 0; // variáveis globais
int numberOfLetters = 0;

int main(void)
{ // função principal

    int stringLength(char string[]); // declaração da funçao de tamanho da string.
    char stringUser[21];             // declara variável que o usuário ira digitar.

    printf("Digite uma string:\n"); // solicita que o usuário digite algo.
    scanf("%s", stringUser);        // armazena o que foi digitado na variável.

    stringLength(stringUser); // chama a função.

    printf("A string %s possui %d letras e %d caracteres!\n", stringUser, numberOfLetters, numberOfCharacters); // mostra em tela a string que o usuário digitou, o número de letras da string e o número de caracteres da string..

    return 0;
}

int stringLength(char string[])
{ // instancia da função de tamanho da string.

    // Sabemos que na linguagem c toda string possue o caratere nulo no final.

    while (string[numberOfCharacters] != '\0')
    {                         // enquanto número de caracteres for diferente de caractere nulo.
        numberOfCharacters++; // adicione 1 a numero de caracteres.
                              // Obtemos assim a quantidade de letras contidas na string, visto que o "while" ignora o caractere nulo.
    }
    numberOfLetters = numberOfCharacters; // informamos que quantidade de letras é igual a quantidade de caracteres(sem o caractere nulo.).
    numberOfCharacters++;                 // então adicionamos o caractere nulo;

    return numberOfCharacters; // retorna o número de caracteres para a chamada de função.
}