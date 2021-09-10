#include <stdio.h>

void nulaneg(int el[40])
{
   int i=0;
   while (i < 40)
   {
      if (el[i] < 0) /*É comparado se o valor é menor que zero*/
      {
         el[i]=0; /*Se sim, o número negativo é anulado*/
         i++;
      }
      else
      {
         i++; /*Se não, pula pra próxima posição*/
      }
   }
   for(i=0; i<40; i++)
   {
      printf("%d ", el[i]); /*O resultado é impresso*/
   }
}

int main()
{
   int vet[40], count=0;
   printf("Digite quarenta valores: \n");
   do
   {
      scanf("%d", &vet[count]); /*Declara-se os elementos do vetor*/
      count++;
   } while (count < 40);
   nulaneg(vet);
   return 0;
}
