#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Custo de Carro!\n");

    float imposto=0.45;
    float distribuidor=0.28;
    float custofabrica,novovalor;

    printf("Digite o valor do Custo de fabrica");
    scanf("%f",custofabrica);

     imposto=(custofabrica*imposto)/100;
     distribuidor=(((custofabrica + imposto)*distribuidor) /100.000);

    novovalor= (distribuidor+imposto);

    printf("O novo valor foi:%f",novovalor);
    printf("O custo de fabrica:%f",distribuidor);
    return 0;
}
