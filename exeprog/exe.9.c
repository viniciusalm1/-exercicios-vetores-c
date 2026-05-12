#include <stdio.h>

int main() {
    char palavra[100];
    int tamanho = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    while(palavra[tamanho] != '\0') {
        tamanho++;
    }

    printf("A palavra possui %d caracteres.\n", tamanho);

    return 0;
}