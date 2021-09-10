#include <stdio.h>

void encval(int el[20], int x)
{
   int i=0;
   while (i < 20 && el[i] != x) /*O programa rodar� de acordo com duas situa��es, caso a vari�vel 'i' ultrapassa o limite ou o valor for encontrado*/
   {
      i++;
   }
   if (el[i] == x)
   {
      printf("\nValor %d na posicao %d", el[i], i); /*Quando encontra, confirma a exist�ncia deste valor e imforma a sua posi��o*/
   }
   else
   {
      printf("\nO valor %d nao se encontra", x); /*Caso o valor n�o for encontrado, informa que n�o h� nesse vetor*/
   }
}

int main()
{
   int vet[20], a, count=0;
   printf("Digite vinte valores: \n");
   do
   {
      scanf("%d", &vet[count]); /*Leia-se todas as 20 posi��es*/
      count++;
   } while (count < 20);
   printf("Digite o valor que quer encontrar: \n");
   scanf("%d", &a); /*Aqui � lido o n�mero que deseja obiter dentro do vetor*/
   encval(vet, a);
   return 0;
}
