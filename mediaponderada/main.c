#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Média Ponderada!\n");


    float n1,n2,n3,media;
    float p1=2.5, p2=3.5,p3=4;
    char nome;


    printf("O nome do Aluno:");
    scanf("%s",&nome);
    printf("A primeira Nota");
    scanf("%f",&n1);
    printf("A Segunda Nota");
    scanf("%f",&n2);
    printf("A Terceira Nota");
    scanf("%f",&n3);

    media=((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);

    printf("Média ponderada foi %f",media);
    return 0;
}
