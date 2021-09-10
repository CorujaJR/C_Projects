#include <stdio.h>

void univec(int vic[10])
{
   int i, n=0;
   i=1+n; /*Para evitar repeticoes pro inicio da linha, o valor do encontro das repeticoes equivale a proxima posicao mais as posicoes ja analisadas*/
   printf("\nRepeticoes:\n");
   while(n < 10) /*E verificado se encontra repeticoes da posicao 'n' em relacao as posicoes 'i'*/
   {
      while(i < 10)
      {
         if(vic[n]!=vic[i]) /*Enquanto nao encontra, verifica a posicao posterior*/
         {
            i++;
         }
         else
         {
            printf("%d ", vic[i]); /*Se encontra, imprime o numero repetido e passa pro proximo numero alvo*/
            break;
         }
      }
      n++; /*Quando analisado, encontra se o proximo numero tem repeticoes ou nao*/
      i=1+n;
   }
}

int main()
{
   printf("Digite 10 numeros:\n");
   int x[10], count;
   for(count=0; count<10; count++)
   {
      scanf("%d", &x[count]);
   }
   univec(x);
   return 0;
}
