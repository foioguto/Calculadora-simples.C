#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void)
{
 int n1, n2, op;
 
 setlocale( LC_ALL, "Portuguese"); 

 printf("calculadora de operações básicas com dois números inteiros.\n");
 printf("digite:\n1 para somar\n2 para dividir\n3 para subtrair\n4 para multiplicar\n");
 scanf("%d", &op);
 
 printf("digite o primeiro número.\n");
 scanf("%d", &n1);
 
 printf("digite o segundo número.\n");
 scanf("%d", &n2);
 
 switch(op)
 {
  default:
  printf("valor inválido!");
  case 1:
  n1 = n1 + n2;
  printf("o resultado da soma é: %d", n1);
  break;
  case 2:
  n1 = n1 / n2;
  printf("o resultado da divisão é: %d", n1);
  break;
  case 3:
  n1 = n1 - n2;
  printf("o resultado da subtração é: %d", n1);
  break;
  case 4:
  n1 = n1 * n2;
  printf("o resuldado da multiplicação é: %d", n1);
  break;
 }
   return 0;
}