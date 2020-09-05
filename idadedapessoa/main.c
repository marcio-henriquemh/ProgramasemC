#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Clacular idade!\n");

    // declarar variaveis

    int dia,mes,ano,idadeatual;
    int anoatual=2020;
    char nome;

    printf("Digite seu nome:");
    scanf("%s",&nome);
    printf("\nDigite seu ano de nascimento");

    printf("Dia:");
    scanf("%d",&dia);
    printf("Mês:");
    scanf("%d",&mes);
    printf("Ano:");
    scanf("%d",&ano);

    idadeatual= anoatual-ano;

    printf("A idade atual  é %d",idadeatual);

    return 0;
}
