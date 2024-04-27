#include <stdio.h>

int main() {
    int n, i, termo_atual = 0, termo_proximo = 1, proximo_termo;

    printf("Digite o valor de n para calcular o n-esimo termo da serie de Fibonacci: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        printf("%d, ", termo_atual);
        proximo_termo = termo_atual + termo_proximo;
        termo_atual = termo_proximo;
        termo_proximo = proximo_termo;
    }

    printf("\nO %d-esimo termo da serie de Fibonacci: %d\n", n, termo_atual);

    return 0;
}
