#include <stdio.h>

int main() {
  float vetor[20], soma = 0;
  int i;

  printf("Digite 20 números reais:\n");
  for (i = 0; i < 20; i++) {
    printf("Número %d: ", i + 1);
    scanf("%f", &vetor[i]);
    soma += vetor[i];
  }

  float media = soma / 20;

  printf("\nA média dos valores é: %.2f", media);

  return 0;
}
