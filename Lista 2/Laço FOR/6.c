#include <stdio.h>

int main() {
    int base, n;

    printf("Digite um numero base: ");
    scanf("%d", &base);
    printf("Digite um valor para n: ");
    scanf("%d", &n);

    printf("Potencias de %d de 0 a %d:\n", base, n);
    for (int i = 0; i <= n; i++) {
        printf("%d^%d = %d\n", base, i, (int)pow(base, i));
    }

    return 0;
}
