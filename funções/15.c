#include <stdio.h>

void maxmart(int a[10][10])
{
   int i=1, n=0, max, lin=0, col=0;
   max=a[lin][col];  /*O valor máximo já é indicado desde a primeira posição da matriz, assim como a sua linha e a coluna*/
   while (n < 10)
   {
      while (i < 10)
      {
         if(max < a[n][i]) /*Quando o valor máximo é menor que um novo valor encontrado na matriz, ele é substituido, o mesmo acontece com a sua posição*/
         {
            max=a[n][i];
            col=i;
            lin=n;
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
   printf("Maximo e %d\nLinha: %d Coluna: %d", max, lin, col); /*O valor máximo encontrado é impresso, assim como sua posição*/
}

int main()
{
   int str[10][10], countl, countc;
   printf("Escreva 100 numeros:\n6");
   for(countl=0; countl < 10; countl++) /*No caso da matriz, as primeiras posições lidas são as linhas*/
   {
      for(countc=0; countc < 10; countc++) /*As segundas posições são as colunas, sendo a sua modificação mais frequente que as linhas*/
      {
         scanf("%d", &str[countl][countc]);
      }
      printf("\n");  /*Pra indicar uma próxima linhar, um parágrafo é pulado a cada linha*/
   }
   maxmart(str);
   return 0;
}
