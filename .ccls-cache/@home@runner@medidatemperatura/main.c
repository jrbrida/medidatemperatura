#include <stdio.h>

int main(void) {
double c, f; 
int ci, fi;
  printf("Digite a temperatura em FAHRENHEIT: \n");//pedimos a informção do usuário
  printf("\t\t\t\t\t\t\t\t\t>>> ");// acertamos a tabulação do programa
  scanf("%lf", &f);// lemos o que foi digitado pelo usuário
  c=(f-32.0)*(5.0/9.0);//calculo para a conversão de valores
  printf("A temperatura em GRAUS CELSIUS É %lf graus!!\n\n", c);// imprimimos na tela a informação desejada

  printf("## AGORA ESTAMOS CALCULANDO UMA VARIÁVEL INTEIRA!!##\n\n");
  printf("Digite a temperatura em FAHRENHEIT: \n");
  printf("\t\t\t\t\t\t\t\t\t>>> ");
  scanf("%i", &fi);
  setbuf(stdin,NULL);
  ci=(fi-32)*(0.55);
  printf("A temperatura em GRAUS CELSIUS É %i graus!!\n\n", ci);
  printf("FIM DO PROGRAMA!!");


  return 0;
}