#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Diferença entre valores");


    // declaração de variaveis

    int a,b,c;

    printf("\n Digite o valor de A:");
    scanf("%d",&a);
    printf("\n Digite o valor de B");
    scanf("%d",&b);

    if(a>b || b<a){

    c= a-b;

    }

    printf("\n O valor de A: %d",a);
    printf(" \n O valor de B:%d", b);
    printf("\n A diferença entre O menor e o maior foi %d",c);


    return 0;
}
