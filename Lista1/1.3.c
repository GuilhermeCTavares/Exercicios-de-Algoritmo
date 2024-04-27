
#include <stdio.h>

int main(){

int valor1, valor2, valor3, soma;

  printf("Digite tres valores inteiros separados por espaco: ");
  scanf("%d %d %d", &valor1, &valor2, &valor3);
  
  soma = valor1 + valor2 + valor3;
  
  printf("Soma dos tres valores = %d\n",soma);
return 0;
}
