#include <stdio.h>

int main() {
  int vetor[15], i, j, aux;

  printf("Digite 15 números inteiros:\n");
  for (i = 0; i < 15; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  for (i = 0; i < 14; i++) {
    for (j = 0; j < 14 - i; j++) {
      if (vetor[j] > vetor[j + 1]) {
        aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
      }
    }
  }

  printf("\nVetor ordenado:\n");
  for (i = 0; i < 15; i++) {
    printf("%d ", vetor[i]);
  }

  return 0;
}
