#include <stdio.h>

void inver(int val[16])
{
   int i;
   for(i=0; i<8; i++) /*Como troca mexe em duas posi��es de um vetor, utilizasse a metade dele*/
   {
      val[i]=val[i]+val[8+i]; /*A troca � efetuada matem�ticamente, e � trocado pelo fazer que esta a 8 posi��es a frente*/
      val[8+i]=val[i]-val[8+i];
      val[i]=val[i]-val[8+i];
   }
   printf("\n\nValores inversos:\n");
   for(i=0; i<16; i++)
   {
      printf("%d ", val[i]);/*Resultado � impresso*/
   }
}

int main()
{
   int z[16], count=0;
   printf("Insira 16 valores:\n");
   do
   {
      scanf("%d", &z[count]); /*Preenche-se o vetor de tamnho 16*/
      count++;
   } while(count < 16);
   inver(z);
   return 0;
}
