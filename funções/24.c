#include <stdio.h>

void prinsomasec(int mat[8][8])
{
   int i=1, n=1, max, soma=0;
   max=mat[0][0]; /*Valor m�ximo � declarado*/
   while(n < 8, i < 8) /*O "while" � ler apenas a diagonal principal, diferente da leitura de uma matriz*/
   {
      if(max < mat[n][i]) /*Nesse caso, verificara o valor m�ximo da diagonal*/
      {
         max=mat[n][i]; /*Quando encontrado, o valor � substituido*/
         n++;
         i++;
      }
      else
      {
         n++;
         i++;
      }
   }
   for(n=0, i=7; n < 8, i > -1; n++, i--)/*J� a diagonal secund�ria, come�a da �ltima at� a primeira coluna*/
   {
      soma=soma+mat[n][i];/*Nesse caso, os elementos da matriz secund�ria s�o somados*/
   }
   printf("Valor maximo: %d, Soma: %d", max, soma);/*Aqui s�o impressos os resultados*/
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
