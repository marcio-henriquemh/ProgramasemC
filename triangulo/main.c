#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf("Saber se o lado do triângulo é ióseles,equilatero,escaleno!\n");

      int a,b,c;

    printf("Digite o valor de A:");
    scanf("%d",&a);
    printf("Digite o valor de B:");
    scanf("%d",&b);
    printf("Digite o valor de C");
    scanf("%d",&c);

      if(a==b && b==c && c==a){

        printf("É um equilatero ");

      }else if (a == b || b == c || c == a) {

    printf(" triângulo Isósceles\n");
    }
        else if (a != b && b != c && c != a){
        printf(" triângulo Escaleno\n");
        }
        else
        printf ("Valores invalidos para formar um triangulo\n");
        system("pause");
}


