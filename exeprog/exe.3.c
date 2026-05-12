#include <stdio.h>

int main() {
    int numeros[10];
    int soma = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);

        soma += numeros[i];
    }

    printf("\nA soma dos numeros e: %d\n", soma);

    return 0;
}