#include <stdio.h>

void matind(int i, int n)
{
   int ind[5][5];
   while (n < 5)
   {
      while (i < 5)
      {
         if (n == i) /*A diagonal principal da matriz equivale a uma sequ�ncia de elementos cujo o valor das linhas e colunas s�o iguais*/
         {
            ind[n][i]=1; /*Nesse caso, todos os elementos dessa diagonal ser�o um*/
            i++;
         }
         else
         {
            ind[n][i]=0; /*J� os n�meros que n�o fazem parte da diagonal s�o equivalentes a zero*/
            i++;
         }
      }
      i=0;
      n++;
   }
   for(n=0; n<5; n++)
   {
      for(i=0; i<5; i++)
      {
         printf("%d ", ind[n][i]);
      }
      printf("\n");
   }
}

int main()
{
   matind(0, 0);
   return 0;
}
