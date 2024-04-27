#include <stdio.h>

int main() {
    int numeros[10];
    float media = 0;

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        media += numeros[i];
    }

    media /= 10;

    printf("A media dos numeros digitados: %.2f\n", media);

    return 0;
}
