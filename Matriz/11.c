#include <stdio.h>

int main() {
  int matriz[3][3];
  int i, j, count = 0;


  printf("Digite os elementos da matriz 3x3:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (matriz[i][j] == 0) {
        count++;
      }
    }
  }

  printf("Número de zeros na matriz: %d\n", count);

  return 0;
}
