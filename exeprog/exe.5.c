#include <stdio.h>

int main() {
    int numeros[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("\nValores na ordem inversa:\n");

    for(int i = 9; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    return 0;
}