#include <stdio.h>
#include <stdlib.h>

//menu
//soma
//subtração
//raiz quadrada
//eleva ao quadrado
//eleva a x
//divisão
//multiplicação
//porcentagem
//retorna pi
//inverso (1/x)
//fatorial
//retorna exp
//seno
//cosseno
//tangent
//fibonacci
//média de n elementos
int main(){
  //soma
  float x=0,y=0,r=0;
  printf("numero: ");
  scanf("%f",&x);
  printf("numero: ");
  scanf("%f",&y);
  r=x+y;
  printf("resultado: %f",r);
  //eleva ao quadrado
  printf("numero: ");
  scanf("%f",&x);
  r=x*x;
  printf("resultado: %f",r);
  //divisao
  printf("numero: ");
  scanf("%f",&x);
  printf("numero: ");
  scanf("%f",&y);
  r=x/y;
  printf("resultado: %f",r);
  return 0;
}
  
