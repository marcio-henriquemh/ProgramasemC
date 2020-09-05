#include<stdlib.h>
#include<stdio.h>

void main(){

    int a, op;
// saber se o valor de um número é igual ao não
    printf("Digite o valor de A:");
    scanf("%d",&a);

    if(a==2){

    printf("A é igual a =",a);
    }

//saber se é número primo ou não.

if(a% 2==1){

printf("\n o número é impar");

}else{

    printf("\n o número é par");
}

// menu de opçõee
if(op==1){

printf("\n opcão = 1");

}else if(op==2){

printf("\n opcao= 2");

}else{

    printf("\n opcão não existe");
}


    return 0;
}

