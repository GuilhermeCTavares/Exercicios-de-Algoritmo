#include <stdio.h>

int main() {

  float valor_real, cotacao_dolar;
  
  printf("Digite o valor em reais e a cotacao do dolar separados por espaco: ");
  scanf("%f %f", &valor_real, &cotacao_dolar);
  
  printf("O valor em dolares é: %.2f\n", valor_real / cotacao_dolar);
  
return 0;
}
