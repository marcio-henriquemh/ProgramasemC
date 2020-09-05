#include <stdio.h>
#include <stdlib.h>

int main()
{
        // declaração de variavel//

        int Area, altura, base;

        printf("Área de um Retangulo");

        printf("\n Digite o valor da altura:");
        scanf("%d", &altura);

        printf("\n Digite o valor da Base:");
        scanf("%d",&base);

        Area= base*altura;

        if(Area< 12){

        printf("area errada");

        }else{

        printf("o valor da área foi %d",Area);

        }
    return 0;
}
