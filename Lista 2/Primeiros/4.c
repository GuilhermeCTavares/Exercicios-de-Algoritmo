#include <stdio.h>

int main() {
    int n, i, soma = 0;

    printf("Digite o valor de n para calcular o somatorio: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        soma += i;
    }

    printf("O resultado do somatorio para n = %d: %d\n", n, soma);

    return 0;
}
