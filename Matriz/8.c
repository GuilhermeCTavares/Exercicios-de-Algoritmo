#include <stdio.h>

int main() {
    int matriz[4][4], i, j, linha, soma;

    printf("Digite os valores da matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o número da linha para calcular a soma: ");
    scanf("%d", &linha);

    soma = 0;
    for (j = 0; j < 4; j++) {
        soma += matriz[linha-1][j];
    }


    printf("Soma dos elementos da linha %d = %d\n", linha, soma);

    return 0;
}
