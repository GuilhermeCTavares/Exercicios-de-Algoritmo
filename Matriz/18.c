#include <stdio.h>

int main() {
  int mat1[2][2], mat2[2][2], result[2][2];
  int i, j, k;


  printf("Digite os elementos da primeira matriz 2x2:\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%d", &mat1[i][j]);
    }
  }


  printf("Digite os elementos da segunda matriz 2x2:\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%d", &mat2[i][j]);
    }
  }

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      result[i][j] = 0;
      for (k = 0; k < 2; k++) {
        result[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }


  printf("A matriz resultante da multiplicação é:\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}
