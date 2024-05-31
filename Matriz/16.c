#include <stdio.h>

int main() {
  int matriz[5][5];
  int i, j;
  int maior = matriz[0][0];
  int linhaMaior = 0;
  int colunaMaior = 0;


  printf("Digite os elementos da matriz 5x5:\n");
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }


  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
        linhaMaior = i;
        colunaMaior = j;
      }
    }
  }

  printf("O maior elemento é %d, na posição (%d, %d)\n", maior, linhaMaior, colunaMaior);

  return 0;
}
