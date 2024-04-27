#include <stdio.h>

int main() {

   float nota1, nota2;
   printf("Digite as duas notas do aluno separadas por espaço: ");
   scanf("%f %f", &nota1, &nota2);
     
	 if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10){
     printf("A média das notas é: %.2f\n", (nota1 + nota2) / 2.0);
}
      else
       printf("Nota inválida!\n");
       
return 0;
}
