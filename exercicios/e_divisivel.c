#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite 2 numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);

    if (num2 == 0 ) {
        printf("Divisao por '0' nao e permitida.\n");
    }else if (num1 % num2 == 0) {
        printf("%d E divisivel por %d\n", num1, num2);
        int result = num1 / num2;
        printf("%d ", result);
    } else {
        printf("%d / %d Divisao nao retorna um numero inteiro!", num1, num2);
    }
    return 0;
}