#include <stdio.h>

int main() {
    int numeros[10];
    for(int i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("\nValores digitados:\n");

    for(int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}