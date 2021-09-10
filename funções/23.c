#include <stdio.h>

void troconetwo(int mata[10][10], int matb[10][10])
{
   int i, n, t;
   for(n=0; n < 10; n++)
   {
      for(i=1+n; i < 10; i++) /*Pra a efetuação da troca utiliza metade das duas matrizes, evitando contato com a diagonal principal*/
      {
         t=mata[i][n];
         mata[i][n]=matb[i][n]; /*É trocado a diagonal inferior da primeira matriz com a diagonal superior da segunda, e vice-versa*/
         matb[i][n]=t;
      }
   }
   printf("\n\n");
   for(n=0; n < 10; n++)
   {
      for(i=0; i < 10; i++)
      {
         printf("%d ", mata[n][i]);
      }
      printf("\n");
   }
   printf("\n\n");
   for(n=0; n < 10; n++)
   {
      for(i=0; i < 10; i++)
      {
         printf("%d ", matb[n][i]);
      }
      printf("\n");
   }
}

int main()
{
   int fie[10][10], rou[10][10], countl, countc;
   printf("Digite 10 valores a cada 10 linhas na matriz 1\n");
   for(countl=0; countl < 10; countl++)
   {
      for(countc=0; countc < 10; countc++)
      {
         scanf("%d", &fie[countl][countc]);
      }
      printf("\n");
   }
   printf("Digite 10 valores a cada 10 linhas na matriz 2\n");
   for(countl=0; countl < 10; countl++)
   {
      for(countc=0; countc < 10; countc++)
      {
         scanf("%d", &rou[countl][countc]);
      }
      printf("\n");
   }
   troconetwo(fie, rou); /*É utilizada duas matriz lidas*/
   return 0;
}
