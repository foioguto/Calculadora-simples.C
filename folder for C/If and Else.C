#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float quilowatt;
int salarioMin, operador=1;

int main(void)
{
 setlocale(  LC_ALL, "Portuguese");
float contaDluz, valorDesconto;
  do{
   printf("Digite o seu salário:\n");
   scanf("%d", &salarioMin);
    
   if(salarioMin >= 1400 && salarioMin <= 1500){
    printf("Quantos Quilowatts foram gastos em sua residência?\n");
    scanf("%f", &quilowatt);
     contaDluz = (salarioMin/7)*quilowatt/100;
     valorDesconto = contaDluz*0.9;
   }else{
    printf("valor inválido.\n");
    contaDluz = 0;
    valorDesconto = 0;
   }
   printf("sua conta de luz custará %.2f, com o desconto de 10 por cento ficará por %.2f\n", contaDluz, valorDesconto);
   printf("aperte 0 para sair\n");
   scanf("%d", &operador);
   
  }while(operador!=0);
return 0;
}
