#include <stdio.h>

int main() {
    int matriz[2][2];

    // Preenchimento da matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if ((i + j) % 2 == 0) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    // Impressao da matriz
    printf("Matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
