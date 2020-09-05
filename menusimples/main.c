#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;

    printf("\n MENU DE OPÇÕES");
    printf("\n1-Opção");
    printf("\n2-Opção");
    printf("\n3-Opção");

    scanf("%d",opcao);


    switch(opcao){

    case 1:

    printf("opcao fpo 1");
    break;

    case 2:

    printf("Opção 2");

    break;

    case 3:

    printf("Fooi op 3");

    break;

    default:
    printf("invalida");

    break;
    }
    system("pause");
}
