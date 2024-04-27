
#include <stdio.h>

int main() {
	
int num1, num2;


printf("Digite dois números inteiros separados por espaço: ");
scanf("%d %d", &num1, &num2);


if (num1 > num2)

 printf("%d é maior que %d\n", num1, num2);

 else if (num2 > num1)
  printf("%d é maior que %d\n", num2, num1);

  else
   printf("Os números são iguais\n");
   
return 0;
}
