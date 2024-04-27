#include <stdio.h>

int main() {
    int numero_secreto = 42;
    int tentativa;

    printf("Tente adivinhar o numero secreto!\n");

    do {
        printf("Digite um numero: ");
        scanf("%d", &tentativa);
        
        if (tentativa != numero_secreto) {
            printf("Tente novamente!\n");
        }
    } while (tentativa != numero_secreto);

    printf("Parabens! Voce acertou o numero secreto.\n");

    return 0;
}
