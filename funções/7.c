#include <stdio.h>

void test(int vic[40])
{
   int i;
   for(i=1; i<40; i++) /*O vetor � lido*/
   {
      vic[i]=vic[i]+vic[i-1]; /*Os n�meros da posi��o atual s�o somados pelos n�meros da posi��o anterior*/
   }
   for(i=0; i<40; i++)
   {
      printf("%d ", vic[i]); /*O vetor modificado � impresso*/
   }
}

int main()
{
   int w[40], count;
   printf("Insira 10 valores:\n");
   for(count=0; count<40; count++)
   {
      scanf("%d", &w[count]); /*� escrito um vetor de quarenta posi��es*/
   }
   test(w);
   return 0;
}
