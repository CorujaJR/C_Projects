#include <stdio.h>

void  cforlonn(int mat[4][4])
{
   int i, n, t;
   for(n=0; n < 4; n++) /*A efetua��o da troca � entre uma linha e uma coluna*/
   {
      t=mat[0][n];
      mat[0][n]=mat[n][3];  /*S�o feitas as trocas entre os valores da primeira linha com a ultima coluna*/
      mat[n][3]=t;
   }
   printf("\n");
   for(n=0; n < 4; n++)
   {
      for(i=0; i < 4; i++)
      {
         printf("%d ", mat[n][i]);  /*Ap�s a troca a matriz modificada � impressa*/
      }
      printf("\n");
   }
}

int main()
{
   int fie[4][4], countl, countc;
   printf("Digite 4 valores a cada 4 linhas\n");
   for(countl=0; countl < 4; countl++)
   {
      for(countc=0; countc < 4; countc++)
      {
         scanf("%d", &fie[countl][countc]);
      }
      printf("\n");
   }
   cforlonn(fie);
   return 0;
}
