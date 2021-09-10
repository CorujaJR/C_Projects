#include <stdio.h>

void indice(int vet[9])
{
   int i=0, n=0;
   printf("\n1 "); /*Imprime-se um por ser o primeiro índice*/
   while (n < 9) /*Leia-se o vetor*/
   {
      printf("%d ", vet[i]); /*O valor é impresso*/
      i=vet[i]-1; /*A próxima posição será o resultado do valor anterior subtraido a um pra ter a posição exata no vetor em c*/
      n++;
   }
}

int main()
{
    int x[9]={5, 7, 6, 9, 2, 8, 4, 0, 3}; /*O vetor é escrito automaticamente*/
    indice(x);
    return 0;
}
