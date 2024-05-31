#include <stdio.h>

int main() {
    int matriz[3][3], i, j;

    printf("Digite os valores da matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Trocar linha 1 e 2
    for (j = 0; j < 3; j++) {
        matriz[0][j] = matriz[0][j] + matriz[1][j];
        matriz[1][j] = matriz[0][j] - matriz[1][j];
        matriz[0][j] = matriz[0][j] - matriz[1][j];
    }

    printf("\nMatriz após troca:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
