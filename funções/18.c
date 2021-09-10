#include <stdio.h>

void maioten(int mat[6][6])
{
   int i=0, n=0, m=0;
   while(n < 6) /*A matriz e lida*/
   {
      while(i < 6)
      {
         if(mat[n][i] > 10) /*E verificado se existe um numero maior que dez*/
            {
               m++; /*Quando encontrado, a quantidade e incrementado*/
               i++;
            }
         else
            {
               i++;
            }
      }
      i=0;
      n++;
    }
   printf("Existem %d numeros maiores que 10", m); /*E informado a quantidade de numeros*/
}

int main()
{
   int rou[6][6], countl, countc;
   for(countl=0; countl < 6; countl++)
   {
      for(countc=0; countc < 6; countc++)
      {
         scanf("%d", &rou[countl][countc]);
      }
      printf("\n");
   }
   maioten(rou);
   return 0;
}
