#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

float quilowatts, contaDluz;
int salarioMin;
int i, operador;
 
 int main(void){
 {
   setlocale(LC_ALL, "Portuguese");
 }
 do{  
    printf("Você ganha 1 salário mínimo?\n 1-Sim ou 2-Não\n");
    scanf("%d", &salarioMin);
    if(salarioMin==2)
{
      printf("Essa pesquisa não é para você.\n 0-Sair\n");
      scanf("%d", &operador);
}
    else
{
      printf("Quantos quilowatts foram gastos em sua residência no último mês?\n", i);
      scanf("%f", &quilowatts);
     for(i = 1; i<=100; i++)
{   
    contaDluz = quilowatts*2; 
     printf("\nConta de luz %d = %.1f\n",i,contaDluz);
     printf("------------------------------------------\n\n");
     printf("Pressione -0 para sair\n");
     scanf("%d", &operador);
}
}
     break;
  return(0); 
  }while(operador!=0);
}           



 
