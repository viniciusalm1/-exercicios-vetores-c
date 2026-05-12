#include <stdio.h>

int main() {
    int numeros[10];
    int maior;

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];

    for(int i = 1; i < 10; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("\nMaior numero: %d\n", maior);

    return 0;
}