#include <stdio.h>

int main() {
  int vetor[30], i, j, contador, max_contador, elemento;

  printf("Digite 30 números inteiros:\n");
  for (i = 0; i < 30; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  max_contador = 0;
  elemento = vetor[0];

  for (i = 0; i < 30; i++) {
    contador = 0;
    for (j = 0; j < 30; j++) {
      if (vetor[i] == vetor[j]) {
        contador++;
      }
    }
    if (contador > max_contador) {
      max_contador = contador;
      elemento = vetor[i];
    }
  }

  printf("\nO elemento que mais aparece é %d.\n", elemento);

  return 0;
}
