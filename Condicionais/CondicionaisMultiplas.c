#include<stdio.h>
#include<stdlib.h>

void main(){

// definindo variaveis

int a = 10;

// conectivo lógico e(And), se a comparação for falsa então a mesma não entra no bloco



if(a > 5 && a > 15){

printf("  A variavel A está entre 5 e 15");


}

// conectivo lógico ou(OR), S uma comparação for verdadeira ela já entra no bloco


if(a > 5 || a > 15){

printf("  A variavel A é maior que 5 ou  15");


}


if((a > 5 && a <15)|| a==20){

printf(" \n A variavel A está entre 5 e 15 ou é igual a 20");


}
    system("Pause");
}