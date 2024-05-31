#include <stdio.h>

int main() {
  int matriz1[3][3], matriz2[3][3], matriz_resultante[3][3];
  int i, j;


  printf("Digite os elementos da primeira matriz 3x3:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &matriz1[i][j]);
    }
  }


  printf("Digite os elementos da segunda matriz 3x3:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &matriz2[i][j]);
    }
  }


  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      matriz_resultante[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }

  printf("A matriz resultante da soma é:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", matriz_resultante[i][j]);
    }
    printf("\n");
  }

  return 0;
}
