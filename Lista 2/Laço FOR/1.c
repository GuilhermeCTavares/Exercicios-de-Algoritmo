#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Numeros pares de 2 ate %d:\n", numero);
    for (int i = 2; i <= numero; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
