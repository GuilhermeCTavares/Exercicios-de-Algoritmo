#include <stdio.h>

int main() {
    int matriz[4][3];

    // Preenchimento da matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if ((i + j) % 2 == 0) {
                matriz[i][j] = 1 - i;
            } else {
                matriz[i][j] = 1+i;
            }
        }
    }

    // Impressao da matriz

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
