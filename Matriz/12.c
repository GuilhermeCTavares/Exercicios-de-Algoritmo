#include <stdio.h>

int main() {
  int matriz[3][3];
  int i, j, soma;

  // Leitura da matriz
  printf("Digite os elementos da matriz 3x3:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  // Cálculo e impressão da soma de cada coluna
  for (j = 0; j < 3; j++) {
    soma = 0;
    for (i = 0; i < 3; i++) {
      soma += matriz[i][j];
    }
    printf("Soma da coluna %d: %d\n", j + 1, soma);
  }

  return 0;
}
