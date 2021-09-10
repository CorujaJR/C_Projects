#include <stdio.h>

void nulanegdiag(int mat[6][6])
{
   int i=0, n=0;
   while (n < 6)
   {
      while (i < 6) /*Lendo a matriz indentificar� os n�meros negativos*/
      {
         if(n == i || n+i == 5) /*As diagonais principal e secund�ria s�o a excess�o, note que a soma da linha e coluna de cada posi��o da diagonal secund�ria equivale ao tamanho da matriz*/
         {
            i++;
         }
         else if (mat[n][i] < 0) /*Quando o n�mero negativo � encontrado, ele � anulado*/
         {
            mat[n][i]=0;
            i++;
         }
         else /*Sen�o, pula pra pr�xima posi��o*/
         {
            i++;
         }
      }
      i=0;
      n++;
   }
   printf("\n\n");
   for(n=0; n < 6; n++)
   {
      for(i=0; i < 6; i++)
      {
         printf("%d ", mat[n][i]);
      }
      printf("\n");
   }
}

int main()
{
   int fie[6][6], countl, countc;
   printf("Digite 6 valores a cada 6 linhas\n");
   for(countl=0; countl < 6; countl++)
   {
      for(countc=0; countc < 6; countc++)
      {
         scanf("%d", &fie[countl][countc]);
      }
      printf("\n");
   }
   nulanegdiag(fie);
   return 0;
}
