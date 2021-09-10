#include <stdio.h>
#include <string.h>

void anagr(char vex[50])
{
   int i=0, n=0;
   while (i<50 && vex[i]) /*A string e lida ate chegar ao "\0"*/
      {
         if(vex[i] != ' ') /*Quando nao encontrado o espaco, imprime o char*/
         {
            printf("%c", vex[i]);
            i++;
         }
         else /*Caso encontrado, o espaço e ignorado*/
         {
            i++;
         }
      }
}

int main()
{
   char x[50];
   printf("Digite uma palavra com quatro letras:\n");
   scanf("%[^\n]", &x); /*Uma string e lida, nesse caso, os espacos brancos nao sao ignorados*/
   anagr(x);
   return 0;
}
