#include <stdio.h>

int main() {
  int matriz[3][3];
  int i, j, identidade = 1;

  printf("Digite os elementos da matriz 3x3:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (i == j && matriz[i][j] != 1) {
        identidade = 0;
        break;
      } else if (i != j && matriz[i][j] != 0) {
        identidade = 0;
        break;
      }
    }
  }

  if (identidade) {
    printf("A matriz é uma matriz identidade.\n");
  } else {
    printf("A matriz não é uma matriz identidade.\n");
  }

  return 0;
}
