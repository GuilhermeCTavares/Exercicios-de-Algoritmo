#include <stdio.h>

int main() {
  int vetor[15];

  
  for (int i = 0; i < 15; i++) {
    vetor[i] = 0;
  }


  for (int i = 0; i < 15; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");

  return 0;
}
