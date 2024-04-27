#include <stdio.h>

int main() {
    int num = 1, soma = 0;

    while (num <= 100) {
        if (num % 2 == 0) {
            soma += num;
        }
        num++;
    }

    printf("A soma dos numeros pares de 1 a 100: %d\n", soma);

    return 0;
}
