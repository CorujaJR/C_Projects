#include <stdio.h>

void maxmart(int a[10][10])
{
   int i=1, n=0, max, lin=0, col=0;
   max=a[lin][col];  /*O valor m�ximo j� � indicado desde a primeira posi��o da matriz, assim como a sua linha e a coluna*/
   while (n < 10)
   {
      while (i < 10)
      {
         if(max < a[n][i]) /*Quando o valor m�ximo � menor que um novo valor encontrado na matriz, ele � substituido, o mesmo acontece com a sua posi��o*/
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
   printf("Maximo e %d\nLinha: %d Coluna: %d", max, lin, col); /*O valor m�ximo encontrado � impresso, assim como sua posi��o*/
}

int main()
{
   int str[10][10], countl, countc;
   printf("Escreva 100 numeros:\n6");
   for(countl=0; countl < 10; countl++) /*No caso da matriz, as primeiras posi��es lidas s�o as linhas*/
   {
      for(countc=0; countc < 10; countc++) /*As segundas posi��es s�o as colunas, sendo a sua modifica��o mais frequente que as linhas*/
      {
         scanf("%d", &str[countl][countc]);
      }
      printf("\n");  /*Pra indicar uma pr�xima linhar, um par�grafo � pulado a cada linha*/
   }
   maxmart(str);
   return 0;
}
