#include <stdio.h>
int main() {
    float numero, quadrado;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    
    quadrado = numero * numero;

    // Imprime o resultado
    printf("O quadrado de %.2f é %.2f\n", numero, quadrado);

    return 0;
}
