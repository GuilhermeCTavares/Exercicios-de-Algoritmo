#include <stdio.h>

int main() {
    int numero, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (i <= numero) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
