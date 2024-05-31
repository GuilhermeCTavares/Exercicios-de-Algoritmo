#include <stdio.h>

int main() {
  int matriz1[2][2], matriz2[2][2];
  int i, j;
  int iguais = 1;


  printf("Digite os elementos da primeira matriz 2x2:\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%d", &matriz1[i][j]);
    }
  }


  printf("Digite os elementos da segunda matriz 2x2:\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%d", &matriz2[i][j]);
    }
  }


  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      if (matriz1[i][j] != matriz2[i][j]) {
        iguais = 0; 
        break;
      }
    }
    if (!iguais) {
      break;
    }
  }


  if (iguais) {
    printf("As matrizes são iguais.\n");
  } else {
    printf("As matrizes não são iguais.\n");
  }

  return 0;
}
