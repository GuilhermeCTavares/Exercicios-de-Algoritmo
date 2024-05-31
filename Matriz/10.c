#include <stdio.h>

int main() {
    int matriz[2][2], i, j, elemento;

    printf("Digite os valores da matriz:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Elemento[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o elemento a ser procurado: ");
    scanf("%d", &elemento);

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (matriz[i][j] == elemento) {
                printf("O elemento %d foi encontrado na matriz!\n", elemento);
                return 0;
            }
        }
    }

    printf("O elemento %d não foi encontrado na matriz.\n", elemento);
    return 0;
}
