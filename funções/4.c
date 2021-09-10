#include <stdio.h>

void encval(int el[20], int x)
{
   int i=0;
   while (i < 20 && el[i] != x) /*O programa rodará de acordo com duas situações, caso a variável 'i' ultrapassa o limite ou o valor for encontrado*/
   {
      i++;
   }
   if (el[i] == x)
   {
      printf("\nValor %d na posicao %d", el[i], i); /*Quando encontra, confirma a existência deste valor e imforma a sua posição*/
   }
   else
   {
      printf("\nO valor %d nao se encontra", x); /*Caso o valor não for encontrado, informa que não há nesse vetor*/
   }
}

int main()
{
   int vet[20], a, count=0;
   printf("Digite vinte valores: \n");
   do
   {
      scanf("%d", &vet[count]); /*Leia-se todas as 20 posições*/
      count++;
   } while (count < 20);
   printf("Digite o valor que quer encontrar: \n");
   scanf("%d", &a); /*Aqui é lido o número que deseja obiter dentro do vetor*/
   encval(vet, a);
   return 0;
}
