#include <stdio.h>

int main() {
  int vetor[15], i, maior, menor;

  printf("Digite 15 números inteiros:\n");
  for (i = 0; i < 15; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  maior = vetor[0];
  menor = vetor[0];

  for (i = 1; i < 15; i++) {
    if (vetor[i] > maior) {
      maior = vetor[i];
    }
    if (vetor[i] < menor) {
      menor = vetor[i];
    }
  }

  printf("\nO maior valor é: %d", maior);
  printf("\nO menor valor é: %d", menor);

  return 0;
}
