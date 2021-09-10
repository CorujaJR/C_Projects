#include <stdio.h>

void tercvic(int a[9], int b[9], int c[9])
{
   int s[9], i=0; /*O novo vetor � declarado*/
   while (i < 9) /*Esse vetor receber� nove elementos, tr�s de cada vetor anteriomente declarado*/
   {
      if (i < 3)
      {
         s[i]=a[i]; /*Os tr�s primeiros valores do vetor a s�o preechidos*/
         i++;
      }
      else if (i < 6)
      {
         s[i]=b[i]; /*Quando a pos���o chegar no tr�s, tr�s valores intermedi�rios do vetor b s�o preechidos*/
         i++;
      }
      else
      {
         s[i]=c[i]; /*Quando nas ultimas tr�s posi��es, s�o preenchidos os tr�s ultimos valores do vetor c*/
         i++;
      }
   }
   printf("\n\nValores:\n");
   for(i=0; i<9; i++)
   {
      printf("%d\n", s[i]); /*O novo vetor � impresso*/
   }
}

int main()
{
   int x[9], y[9], z[9], count;
   printf("Preencha o primeiro vetor com 9 elementos:\n"); /*Tr�s vetores s�o declarados e preechidos*/
   for (count=0; count < 9; count++)
   {
      scanf("%d", &x[count]);
   }
   printf("Agora preenche o segundo vetor:\n");
   for (count=0; count < 9; count++)
   {
      scanf("%d", &y[count]);
   }
   printf("Preencha o terceiro:\n");
   for (count=0; count < 9; count++)
   {
      scanf("%d", &z[count]);
   }
   tercvic(x, y, z);
   return 0;
}
