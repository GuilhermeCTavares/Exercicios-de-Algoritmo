#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);

    printf("Digite os elementos da sequencia:\n");
    for (int i = 0; i < n; i++) {
        int elemento;
        scanf("%d", &elemento);
        soma += elemento;
    }

    printf("A soma da sequencia: %d\n", soma);

    return 0;
}
