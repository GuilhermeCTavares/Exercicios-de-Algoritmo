#include <stdio.h>

int main() {
    int contador = 0;
    float numero, soma = 0;

    while (contador < 5) {
        printf("Digite um numero: ");
        scanf("%f", &numero);
        soma += numero;
        contador++;
    }

    float media = soma / 5;
    printf("A media dos numeros inseridos: %.2f\n", media);

    return 0;
}
