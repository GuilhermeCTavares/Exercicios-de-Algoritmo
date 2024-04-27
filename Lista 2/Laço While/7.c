#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        soma += numero % 10;
        numero /= 10;
    }

    printf("A soma dos digitos do numero: %d\n", soma);

    return 0;
}
