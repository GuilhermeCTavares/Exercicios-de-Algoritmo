#include <stdio.h>

int main() {
  int n, i;
  float vetor[100], soma = 0;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  printf("Digite os elementos do vetor:\n");
  for (i = 0; i < n; i++) {
    scanf("%f", &vetor[i]);
    soma += vetor[i];
  }

  printf("A soma dos elementos do vetor e: %.2f\n", soma);

  return 0;
}
