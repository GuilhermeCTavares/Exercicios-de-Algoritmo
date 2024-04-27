#include <stdio.h>

int main(){

  float nota1, nota2, nota3, nota4, media;
  
  printf("Digite as quatro notas separadas por espaco: ");
  scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    
  media = (nota1 + nota2 + nota3 + nota4) / 4.0;
  
  printf("Media das notas é: %.2f\n", media);
  
return 0;
}
