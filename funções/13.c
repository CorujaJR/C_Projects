#include <stdio.h>

void compac(int a[50])
{
   int i=0, n=0;
   while (n<50) /*O primeiro "while" ir� ler o vetor cinquenta vezes at� que os zeros estej�o na �ltima posi��o*/
   {
      while (i<50) /*O segundo "while" ir� modificar a pos���o do zero*/
      {
         if(a[i] != 0) /*Quando o zero n�o � encontrado, passa-se pra pr�xima posi��o*/
         {
            i++;
         }
         else /*Quando localizado as pos���es s�o trocadas*/
         {
            a[i]=a[i+1];/*Susbstituie-se o zero pelo valor posterior*/
            a[i+1]=0;/*O pr�ximo valor valer� zero at� que seje substituido quando o "while" resetar*/
            i++;
         }
      }
      i=0;
      n++;
   }
   printf("\nValores:\n");
   for(i=0; i<50; i++)
   {
      printf("%d ", a[i]); /*O vetor � impresso*/
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
