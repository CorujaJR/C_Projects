#include <stdio.h>

void twoval(int val[12], int x, int y)
{
   int res;
   res=val[x]+val[y]; /*Soma os elementos de acordo com a posi��o escolhida*/
   printf("\n\nSoma entre %d e %d e igual a %d", val[x], val[y], res); /*O resultado � impresso*/
}

int main()
{
   int z[12], a, b, count=0;
   printf("Insira 12 valores:\n");
   do
   {
      scanf("%d", &z[count]); /*Escreve um n�mero qualquer no vetor*/
      count++;
   } while(count < 12); /*Repete 12 vezes at� preencher todo o vetor*/
   printf("\nInforme duas posicoes de 0 a 11\n");
   scanf("%d", &a); /*Informe a posi��o X*/
   scanf("%d", &b); /*Informe a posi��o Y*/
   twoval(z, a, b);
   return 0;
}
