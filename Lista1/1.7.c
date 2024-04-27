#include <stdio.h>

int main() {

  int n=0, ant=0, suce=0;
  
  printf("Digite um numero inteiro: ");
  scanf("%d", &n);
  
  ant = n-1;
  suce = n+1;
  
  printf("Antecessor: %d ---- Sucessor: %d\n", ant, suce);
  
return 0;
}
