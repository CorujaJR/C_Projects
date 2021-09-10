#include <stdio.h>

void matrenc(int mat[20][20], int x)
{
   int i=0, n=0, lin=0, col=0;
   while (n < 20)
   {
      while (i < 20)
      {
         if(x == mat[n][i]) /*Lida a matriz, identifica se a posi��o tem ou n�o o n�mero esperado*/
         {
            col=i;
            lin=n;
            break; /*Quando encontrado, � quebrado a contagem do "while" pra colunas, e grava as linhas e colunas*/
         }
         else
         {
            i++;
         }
      }
      if(x == mat[n][i])
         {
            break;/*� quebrado tamb�m a contagem "while" pra linha pra seguir com o resultado*/
         }
         else
         {
            i=0;
            n++;
         }
   }
   if (mat[n][i] == x)
   {
      printf("\nO valor %d esta localizado na linha %d e na coluna %d", mat[n][i], lin, col); /*Quando encontrada, informa a linha e coluna do resultado*/
   }
   else
   {
      printf("\nO valor %d nao foi encontrado", x); /*Sen�o, ele n�o se encontra*/
   }
}

int main()
{
   int jab[20][20], a, countl, countc;
   printf("Digite 20 valores a cada 20 linhas:\n");
   for(countl=0; countl < 20; countl++)
   {
      for(countc=0; countc < 20; countc++)
      {
         scanf("%d", &jab[countl][countc]);
      }
      printf("\n");
   }
   printf("Digite o resultado que queira encontrar:\n");
   scanf("%d", &a); /*Ap�s escrita a matriz, voc� insere o n�mero que quer encontrar*/
   matrenc(jab, a);
   return 0;
}
