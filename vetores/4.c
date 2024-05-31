#include <stdio.h>

int main() {
  int vetor[8], i;

  printf("Digite 8 números inteiros:\n");
  for (i = 0; i < 8; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  printf("\nVetor na ordem inversa:\n");
  for (i = 7; i >= 0; i--) {
    printf("%d ", vetor[i]);
  }

  return 0;
}
