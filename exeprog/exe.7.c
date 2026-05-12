#include <stdio.h>

int main() {
    int numeros[10];
    int x;
    int encontrado = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("Digite o valor que deseja procurar: ");
    scanf("%d", &x);

    for(int i = 0; i < 10; i++) {
        if(numeros[i] == x) {
            encontrado = 1;
        }
    }

    if(encontrado == 1) {
        printf("O numero %d esta no vetor.\n", x);
    }
    else {
        printf("O numero %d nao foi encontrado.\n", x);
    }

    return 0;
}