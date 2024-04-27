#include <stdio.h>

 int main() {

   float salarioBase, salarioReceber;
   
  printf("Digite o salário base do funcionário: ");
  scanf("%f", &salarioBase);
  
  
  salarioReceber = salarioBase * 1.05; 
  
  printf("O salário a receber é: %.2f\n", salarioReceber);
  
return 0;
}
