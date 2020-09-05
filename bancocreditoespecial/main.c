#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Banco Empresta!\n");

    // Declarando variavel

    int dias=0,i;
    float salario,soma=0,atual;
    char nome;



    printf("Nome do Cliente");
     scanf("%s",&nome);

    for( i=0;i<=2;i++){

    printf("Valor do dia:");
    scanf("%f",&salario);
    dias=dias + 1 ;
    soma= soma + salario;

    atual= soma/dias;

    }

    if(atual<200){

    printf("O crédito foi negado");

    }

    if(atual>201 && atual<400){

    printf("O crédito é de 20%");


    } if(atual>401 && atual<600){

    printf("o credito é de 30%");
    } if(atual >601){

    printf("O crédito é de 40%");

    }

    printf("\n salario inicial %f",soma);

    printf("\n salario médio final %f",atual);



    return 0;
}
