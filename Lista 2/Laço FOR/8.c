#include <stdio.h>

int main() {
    int n;
    long long int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d: %lld\n", n, fatorial);

    return 0;
}



