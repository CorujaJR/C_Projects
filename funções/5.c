#include <stdio.h>

void nulaneg(int el[40])
{
   int i=0;
   while (i < 40)
   {
      if (el[i] < 0) /*� comparado se o valor � menor que zero*/
      {
         el[i]=0; /*Se sim, o n�mero negativo � anulado*/
         i++;
      }
      else
      {
         i++; /*Se n�o, pula pra pr�xima posi��o*/
      }
   }
   for(i=0; i<40; i++)
   {
      printf("%d ", el[i]); /*O resultado � impresso*/
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
