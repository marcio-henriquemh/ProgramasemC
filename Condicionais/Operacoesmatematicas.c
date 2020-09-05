#include <stdio.h>
    #include<math.h>
    int main(void)
    {
        int a, b, soma,subt,mult, div,resto;
        printf("a: ");
        scanf("%d", &a);
       printf("b: ");
        scanf("%d", &b);
        soma = a + b;
        subt=a-b; 
        mult=a*b;
        div=a/b;
        resto=a%b;
        //soma de dois valores
      printf("/n a + b = %d\n",soma);
      //subtração de dois valores 
        printf("\n a-b =%d/n",subt);
       // multiplicação de dois valores
        printf("\n a*b %d=", mult);
        //divisão de dois valors
        printf("\n a/b %d=", div);
        //resto da divisão
          printf("a/b %d/n=", resto);
          // valor absoluto
          printf("O valor absoluto é",fabs(-3));
       return 0;
  }