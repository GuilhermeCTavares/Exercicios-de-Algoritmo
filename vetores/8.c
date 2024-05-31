#include <stdio.h>

void ordenaVetor(int vetor[], int tamanho) {
  int i, j, aux;

  for (i = 0; i < tamanho - 1; i++) {
    for (j = 0; j < tamanho - 1 - i; j++) {
      if (vetor[j] > vetor[j + 1]) {
        aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
      }
    }
  }
}

int main() {
  int vetor[15], i;

  printf("Digite 15 números inteiros:\1");
  for (i = 0; i < 15; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  ordenaVetor(vetor, 15);

  printf("\nVetor ordenado:\n");
  for (i = 0; i < 15; i++) {
    printf("%d ", vetor[i]);
  }

  return 0;
}
