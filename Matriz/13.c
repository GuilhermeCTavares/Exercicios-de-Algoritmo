#include <stdio.h>

int main() {
  int matriz[2][2];
  int escalar;


  printf("Digite os elementos da matriz 2x2:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("Digite o número escalar: ");
  scanf("%d", &escalar);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      matriz[i][j] *= escalar;
    }
  }

  printf("Matriz resultante:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}
