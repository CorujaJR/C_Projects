#include <stdio.h>

void tenimp(int val[10])
{
   int i;
   printf("\n\nValores:\n");
   for(i=0; i<10; i++)
   {
      printf("%d ", val[i]); /*O valor � impresso*/
   }
}

int main()
{
   int z[10], count=0;
   printf("Insira 10 numeros impares:\nPS: Caso o numero nao for impar soma-se um\n\n"); /*Deixa-se um aviso em substituir os n�mros pares em �mpares*/
   do
   {
      scanf("%d", &z[count]);
      if(z[count]%2 == 0) /*� feita a compara��o se o n�mero � par ou �mpar*/
      {
         z[count]++;
         count++;
      }
      else
      {
         count++;
      }
   } while(count < 10);
   tenimp(z);
   return 0;
}
