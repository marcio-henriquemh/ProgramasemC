#include <stdio.h>
#include <stdlib.h>

int main()
{
        // declaração de variavel

        int  F,Resultado;

        printf("Digite o valor em Farenheit:");
        scanf("%d",&F);
         Resultado= (F-32)/1.8;

         printf("O valor em celcius foi: %d",Resultado);

    return 0;
}
