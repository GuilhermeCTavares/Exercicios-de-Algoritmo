#include <stdio.h>

int main() {
    int matriz[2][2];

    // Preenchimento da matriz com o valor 1
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matriz[i][j] = 1;
        }
    }

    // Impressão da matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
