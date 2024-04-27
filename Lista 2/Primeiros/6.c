#include <stdio.h>

int main() {
    float num1, num2, num3, maior;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    maior = num1;

    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    printf("O maior numero: %.2f\n", maior);

    return 0;
}
