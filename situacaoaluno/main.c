#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n Boletim e situação do Aluno");

    // declaração variavel
    float nota1,nota2,nota3,nota4,media,i;
    char nome,resultado;
    printf("\nDigite o nome do Aluno:");
    scanf("%s",&nome);
    printf("NOTAS:");
    scanf("%f",&nota1);
    scanf("%f",&nota2);
    scanf("%f",&nota3);
    scanf("%f",&nota4);
    media= (nota1+nota2+nota3+nota4)/4;

    if(media>=6.0){

    resultado=" aprovado";
     printf("\nA media do aluno foi %f",media);
    printf("logo ele estará APROVADO");

    }else if((media >= 5.0) && (media < 6.0)){

    resultado="recuperação";
     printf("\nA media do aluno foi %f",media);
    printf("logo ele estará RECUPERAÇÃO");
    }else{
     printf("\nA media do aluno foi %f",media);
    printf("logo ele estará REPROVADO");

    }



    return 0;
}
