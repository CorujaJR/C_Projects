#include <stdio.h>

void mattriag(int mat[8][8])
{
   int i=0, n=0;
   while (n < 8)
   {
      while (i < 8)
      {
         if (i > n) /*Os valores que estão acima da diagonal principal tem os valores das colunas maiores que os das linhas*/
         {
            mat[n][i]=0; /*Nesse caso, esse valores serão substituidos por zero*/
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
   printf("\n");
   for(n=0; n<8; n++)
   {
      for(i=0; i<8; i++)
      {
         printf("%d ", mat[n][i]); /*O valor final é impresso*/
      }
      printf("\n");
   }
}

int main()
{
   int tam[8][8], countl, countc;
   printf("Digite 64 valores:\n");
   for(countl=0; countl < 8; countl++)
   {
      for(countc=0; countc < 8; countc++)
      {
         scanf("%d", &tam[countl][countc]);
      }
      printf("\n");
   }
   mattriag(tam);
   return 0;
}
