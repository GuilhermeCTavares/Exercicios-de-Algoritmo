#include <stdio.h>

int main() {
  int matriz[6][6];
  int i, j, negativos = 0;


  printf("Digite os elementos da matriz 6x6:\n");
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }


  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      if (matriz[i][j] < 0) {
        negativos++;
      }
    }
  }


  printf("A matriz possui %d números negativos.\n", negativos);

  return 0;
}
