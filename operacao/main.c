#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("OPerações Matemática:");

    //declaração de variaveis

    int a,b,resultado,op;

    printf("\nDigite o valor de A:");
    scanf("%d",&a);
    printf("Digite o valor de B:");
    scanf("%d",&b);
    printf("\nDigite sua opcão \n1- soma \n2-subtrair \n3-multiplicar  \n4 - dividir ");
    scanf("%d",&op);

    switch(op){
    case 1:
    resultado= a+b;
    printf("o resultado da soma foi: %d",resultado);
    break;
    case 2:
    resultado=a-b;
    printf("o resultado da subtração foi:%d",resultado);
    break;
    case 3:
    resultado=a*b;
    printf("o rsultado da multiplicação foi %d",resultado);
    break;
    case 4:
    resultado=a/b;
    printf("o rsultado  da divisão foi %d:",resultado);
    break;
    }
    return 0;
}
