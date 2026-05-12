#include <stdio.h>

int main() {
    int numeros[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros pares:\n");

    for(int i = 0; i < 10; i++) {
        if(numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
        }
    }

    return 0;
}