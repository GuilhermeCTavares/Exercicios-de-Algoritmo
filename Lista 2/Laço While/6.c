#include <stdio.h>

int main() {
    int numero, maior = 0;

    printf("Digite uma lista de numeros (digite 0 para encerrar): ");

    while (1) {
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }
        if (numero > maior) {
            maior = numero;
        }
    }

    printf("O maior numero inserido: %d\n", maior);

    return 0;
}
