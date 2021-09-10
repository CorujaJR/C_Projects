#include <stdio.h>

void prinsomasec(int mat[8][8])
{
   int i=1, n=1, max, soma=0;
   max=mat[0][0]; /*Valor máximo é declarado*/
   while(n < 8, i < 8) /*O "while" é ler apenas a diagonal principal, diferente da leitura de uma matriz*/
   {
      if(max < mat[n][i]) /*Nesse caso, verificara o valor máximo da diagonal*/
      {
         max=mat[n][i]; /*Quando encontrado, o valor é substituido*/
         n++;
         i++;
      }
      else
      {
         n++;
         i++;
      }
   }
   for(n=0, i=7; n < 8, i > -1; n++, i--)/*Já a diagonal secundária, começa da última até a primeira coluna*/
   {
      soma=soma+mat[n][i];/*Nesse caso, os elementos da matriz secundária são somados*/
   }
   printf("Valor maximo: %d, Soma: %d", max, soma);/*Aqui são impressos os resultados*/
}

int main()
{
   int fie[8][8], countl, countc;
   printf("Digite 8 valores a cada 8 linhas:\n");
   for(countl=0; countl < 8; countl++)
   {
      for(countc=0; countc < 8; countc++)
      {
         scanf("%d", &fie[countl][countc]);
      }
      printf("\n");
   }
   prinsomasec(fie);
   return 0;
}
