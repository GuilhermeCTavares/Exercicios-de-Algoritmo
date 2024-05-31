#include <stdio.h>

int main() {
  int vetorA[10], vetorB[10], i;

  printf("Digite 10 números inteiros para o vetor A:\n");
  for (i = 0; i < 10; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &vetorA[i]);
  }

  for (i = 0; i < 10; i++) {
    vetorB[i] = vetorA[i];
  }

  printf("\nVetor B após a cópia:\n");
  for (i = 0; i < 10; i++) {
    printf("%d ", vetorB[i]);
  }

  return 0;
}\
