#include <stdio.h>

void tercvic(int a[9], int b[9], int c[9])
{
   int s[9], i=0; /*O novo vetor é declarado*/
   while (i < 9) /*Esse vetor receberá nove elementos, três de cada vetor anteriomente declarado*/
   {
      if (i < 3)
      {
         s[i]=a[i]; /*Os três primeiros valores do vetor a são preechidos*/
         i++;
      }
      else if (i < 6)
      {
         s[i]=b[i]; /*Quando a posíção chegar no três, três valores intermediários do vetor b são preechidos*/
         i++;
      }
      else
      {
         s[i]=c[i]; /*Quando nas ultimas três posições, são preenchidos os três ultimos valores do vetor c*/
         i++;
      }
   }
   printf("\n\nValores:\n");
   for(i=0; i<9; i++)
   {
      printf("%d\n", s[i]); /*O novo vetor é impresso*/
   }
}

int main()
{
   int x[9], y[9], z[9], count;
   printf("Preencha o primeiro vetor com 9 elementos:\n"); /*Três vetores são declarados e preechidos*/
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
