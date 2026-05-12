#include <stdio.h>

int main() {
    int numeros[10];
    int positivos = 0, negativos = 0, zeros = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);

        if(numeros[i] > 0) {
            positivos++;
        }
        else if(numeros[i] < 0) {
            negativos++;
        }
        else {
            zeros++;
        }
    }

    printf("\nPositivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Zeros: %d\n", zeros);

    return 0;
}