#include <stdio.h>

int main() {
    float num1, num2, num3, menor;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    menor = num1;

    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    printf("O menor numero: %.2f\n", menor);

    return 0;
}
