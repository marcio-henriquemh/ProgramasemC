#include <stdio.h>
#include <stdlib.h>

int main(){
char nome[3],nomeVelha,nomeNova;
int i,idade[3],maior=-9999,menor=9999;


     for(i=0;i<=3;i++){
        printf("Digite o %d de 50 nomes : ",i+1);
        scanf("%s",&nome[i]);
        printf("Digite a %d de 50 idades : ",i+1);
        scanf("%d",&idade[i]);
     }
     for(i=0;i<3;i++)
     {
        if(idade[i]>maior)
        {
          maior=idade[i];
          nomeVelha=nome[i];
        }
        if(idade[i]<menor)
        {
          menor=idade[i];
          nomeNova=nome[i];
        }
     }
printf("\nA pessoa mais velha tem idade de %d e seu nome %s.",maior,nomeVelha);
printf("\nA pessoa mais nova tem idade de %d e seu nome  %s.",menor,nomeNova);
}
