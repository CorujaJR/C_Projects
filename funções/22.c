#include <stdio.h>

void trocdiginf(int mat[5][5])
{
   int i, n, t;
   for(n=0; n < 5; n++) /*A matriz é lida pra efetuação da troca*/
   {
      for(i=1+n; i < 5; i++) /*Como se trata da troca das diagonais superior e inferior, evitasse tocar na diagonal da matriz*/
      {
         t=mat[n][i]; /*A troca é efetuada utilizando uma variável reserva*/
         mat[n][i]=mat[i][n];
         mat[i][n]=t;
      }
   }
   printf("\n");
   for(n=0; n < 5; n++)
   {
      for(i=0; i < 5; i++)
      {
         printf("%d ", mat[n][i]); /*A matriz modificada é lida*/
      }
      printf("\n");
   }
}

int main()
{
   int fie[5][5], countl, countc;
   printf("Digite 25 valores:\n");
   for(countl=0; countl < 5; countl++)
   {
      for(countc=0; countc < 5; countc++)
      {
         scanf("%d", &fie[countl][countc]);
      }
      printf("\n");
   }
   trocdiginf(fie);
   return 0;
}
