#include <stdio.h>

void test(int vic[40])
{
   int i;
   for(i=1; i<40; i++) /*O vetor é lido*/
   {
      vic[i]=vic[i]+vic[i-1]; /*Os números da posição atual são somados pelos números da posição anterior*/
   }
   for(i=0; i<40; i++)
   {
      printf("%d ", vic[i]); /*O vetor modificado é impresso*/
   }
}

int main()
{
   int w[40], count;
   printf("Insira 10 valores:\n");
   for(count=0; count<40; count++)
   {
      scanf("%d", &w[count]); /*É escrito um vetor de quarenta posições*/
   }
   test(w);
   return 0;
}
