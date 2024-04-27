#include <stdio.h>

int main() {
    int numero, tentativa;

    printf("Adivinhe o numero: ");
    scanf("%d", &numero);

    do {
        printf("Tente novamente: ");
        scanf("%d", &tentativa);
    } while (tentativa != numero);

    printf("Parabens! Voce acertou o numero.\n");

    return 0;
}
