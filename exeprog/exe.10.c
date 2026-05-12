#include <stdio.h>

int main() {
    char palavra[100];
    int tamanho = 0;
    int ehPalindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    while(palavra[tamanho] != '\0') {
        tamanho++;
    }

    for(int i = 0; i < tamanho / 2; i++) {
        if(palavra[i] != palavra[tamanho - 1 - i]) {
            ehPalindromo = 0;
        }
    }

    if(ehPalindromo == 1) {
        printf("A palavra e um palindromo.\n");
    }
    else {
        printf("A palavra nao e um palindromo.\n");
    }

    return 0;
}