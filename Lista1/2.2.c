
#include <stdio.h>
#include <math.h> 

int main() {

  float numero;
  printf("Digite um numero maior que zero: ");
  scanf("%f", &numero);

   if (numero >= 0)
    
	printf("A raiz quadrada de %.2f é: %.2f\n", numero, sqrt(numero));
     
	 else
       
	   printf("Número invalido!\n");
return 0;
}
