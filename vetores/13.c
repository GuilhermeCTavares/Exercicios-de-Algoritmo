#include <stdio.h>

int main() {
  int n, i;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  int vetor[n];
  printf("Digite os elementos do vetor:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &vetor[i]);
  }

  printf("O vetor invertido é:\n");
  for (i = n - 1; i >= 0; i--) {
    printf("%d ", vetor[i]);
  }

  return 0;
}
