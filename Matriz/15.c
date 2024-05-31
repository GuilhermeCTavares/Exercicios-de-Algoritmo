#include <stdio.h>

int main() {
  int matriz[4][4];
  int soma = 0;


  printf("Digite os elementos da matriz 4x4:\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      soma += matriz[i][j];
    }
  }

  printf("A soma dos elementos da matriz é: %d\n", soma);

  return 0;
}
