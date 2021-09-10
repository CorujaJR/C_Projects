#include <stdio.h>

void compac(int a[50])
{
   int i=0, n=0;
   while (n<50) /*O primeiro "while" irá ler o vetor cinquenta vezes até que os zeros estejão na última posição*/
   {
      while (i<50) /*O segundo "while" irá modificar a posíção do zero*/
      {
         if(a[i] != 0) /*Quando o zero não é encontrado, passa-se pra próxima posição*/
         {
            i++;
         }
         else /*Quando localizado as posíções são trocadas*/
         {
            a[i]=a[i+1];/*Susbstituie-se o zero pelo valor posterior*/
            a[i+1]=0;/*O próximo valor valerá zero até que seje substituido quando o "while" resetar*/
            i++;
         }
      }
      i=0;
      n++;
   }
   printf("\nValores:\n");
   for(i=0; i<50; i++)
   {
      printf("%d ", a[i]); /*O vetor é impresso*/
   }
}

int main()
{
   int x[50], count;
   printf("Digite 50 valores:\n");
   for(count=0; count<50; count++)
   {
      scanf("%d", &x[count]);
   }
   compac(x);
   return 0;
}
