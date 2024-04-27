#include <stdio.h>

int main() {

float salario, prestacao;
printf("Digite o salário e o valor da prestação do empréstimo: ");
scanf("%f %f", &salario, &prestacao);
if (prestacao > salario * 0.2)
printf("Empréstimo não concedido\n");
else
printf("Empréstimo concedido\n");
return 0;
}
