#include <stdio.h>

int main() {
  int n, i;
  int maior, menor;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  int vetor[n];

  printf("Digite os elementos do vetor:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &vetor[i]);
  }


  maior = vetor[0];
  menor = vetor[0];

  for (i = 1; i < n; i++) {
    if (vetor[i] > maior) {
      maior = vetor[i];
    }
    if (vetor[i] < menor) {
      menor = vetor[i];
    }
  }

  printf("Maior valor: %d\n", maior);
  printf("Menor valor: %d\n", menor);

  return 0;
}
