
#include <stdio.h>
#include <math.h>

int main() {
	

  float numero=0, quadrado=0, raiz=0;
   printf("Digite um numero diferente de zero: ");
   scanf("%f", &numero);
     
	 if (numero >= 0){
      raiz = sqrt(numero);

       printf("A raiz quadrada de %.2f é: %.2f\n", numero, raiz);
}

     else {
       quadrado = pow(numero, 2);
        printf("O quadrado de %.2f é: %.2f\n", numero, quadrado);
}
return 0;
}
