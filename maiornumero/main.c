#include <stdio.h>
#include <stdlib.h>

int main()
{

     printf("Maior numero");

     //declaracao de variavel
    int a,b,c, maior;

    printf("Digite o valor de A:");
    scanf("%d",&a);
    printf("Digite o valor de B:");
    scanf("%d",&b);
    printf("Digite o valor de C");
    scanf("%d",c);


    if(a > b && a > c){
        printf("%d", a);
    }else{
    if(b>a && b>c){
        printf("%d", b);
    }else{
        printf("%d", c);
    }
    return 0;

}
}
