#include <stdio.h>

int main(){

  float valTot=0.0, parcela3=0.0, desc10=0.0;
  float cVTP=0.0, cVD10=0.0;
  
  
   printf("Vendedor Por Favor, digite o valor total da compra: R$ ");
   scanf("%f", &valTot);
   
   
   printf("Cliente o VALOR TOTAL de sua compra = R$ %.2f", valTot);
 
   parcela3=(valTot/3);

   desc10=(valTot*0.9);

   cVTP=valTot*0.05;

   cVD10=valTot*0.9*0.05;
   
    printf("\nVocê pode pagar de quatro maneiras a seguir:\n");
    
	printf("\n1: Valor total com desconto de 10 porcento R$ %.2f", desc10);
    
	printf("\n2: Valor de cada parcela em 3x R$ %.2f", parcela3);
    
	printf("\n3: Comissão do vendedor no caso pagamento a vista R$ %.2f", cVD10);
    
	printf("\n4: Comissão do vendedor no caso pagamento parcelado R$ %.2f", cVTP);
return 0;
}
