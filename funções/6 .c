#include <stdio.h>

void parimp(int x[20], int y[20])
{
   int i, z[40], n; /*Um vetor com tamanho somado � declarado*/
   for(i=0, n=0; i<40; i+=2) /*O 'i', quando igual � zero, ser� somado de dois em dois pra bater com os pares*/
   {
      z[i]=x[n]; /*As posi��es pares do vetor 'z' receber� os valores do vetor 'x'*/
      n++;
   }
   for(i=1, n=0; i<40; i+=2)/*Como o 'i' equivale a 1, sempre bater� nas posi��es �mpares somando dois*/
   {
      z[i]=y[n]; /*Como as posi��es s�o �mpares, os valores do vetor 'y' ser�o preechidos*/
      n++;
   }
   printf("\nValores:\n");
   for(i=0; i<40; i++)
   {
      printf("%d\n", z[i]); /*O valor do vetor � impresso*/
   }
}

int main()
{
   int a[20], b[20], count=0;
   printf("Insira 20 valores pro primeiro vetor:\n");
   for(count=0; count<20; count++)
   {
      scanf("%d", &a[count]);
   }
   printf("Insira 20 valores pro segundo vetor:\n");
   for(count=0; count<20; count++)
   {
      scanf("%d", &b[count]);
   }
   parimp(a, b); /*Declarado os dois vetores, a fun��o � chamada*/
   return 0;
}
