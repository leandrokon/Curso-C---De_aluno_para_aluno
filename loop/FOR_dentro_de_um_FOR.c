#include <stdio.h>

int main () {
    for (int i = 0; i <=10; i++) {
        printf("**volta %d**\n", i);
        for (int j = 0; j<= 10;j++) {
            printf("Ponto %d\n", j);
        }
        printf("\n");
    }
    return 0;
}