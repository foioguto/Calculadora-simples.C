#include <stdio.h>
#include <stdlib.h>
/*declarou as bibliotecas*/
char Nome[40];
char Sobrenome[40];
/*declarou vari�veis de entrada-quantidade de caracteres para duas coisas*/
int main() {
    /*entrada de dados*/
    printf("informe o seu primeiro nome\n");
    scanf("%s",&Nome);
    printf("informe o seu sobrenome\n");
    scanf("%s",&Sobrenome);
    /*%s para imprimir os caracteres*/
    
    /*impress�o de dados*/
    
    printf("Completo Nome : %s", Nome);
    printf("%s", Sobrenome);
	   
    return (0);
	}
    