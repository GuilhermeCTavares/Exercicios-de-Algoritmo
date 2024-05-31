#include <stdio.h>

int main() {
  int vetor[10], i, qtdPares = 0;

  printf("Digite 10 números inteiros:\n");
  for (i = 0; i < 10; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &vetor[i]);

    if (vetor[i] % 2 == 0) {
      qtdPares++;
    }
  }

  printf("\nQuantidade de números pares: %d\n", qtdPares);

  return 0;
}
