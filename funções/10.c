#include <stdio.h>
#include <string.h>

void anagr(char vex[5])
{
   char vix[5]; /*A outra string sera um anagrama da original*/
   int i, tam;
   tam=strlen(vex)-1; /*E lido o tamanho da string caso for menor que quatro*/
   for(i=0; vex[i]; i++) /*A string e lida ate o "\0"*/
   {
      vix[i]=vex[tam-i]; /*A string 'vix' recebe os caracteres da string original desde da ultima ate a primeira*/
   }
   vix[i]='\0'; /*Coloca-se o '/0' pra evitar leituras de char que nao fazem parte da string*/
   i=strcmp(vex, vix); /*E lido se o resultado e verdadeiro ou nao*/
   if (i == 0)
   {
         printf("\n%s e %s sao anagramas", vex, vix); /*Se verdadeiro, confirma*/
   }
   else
   {
         printf("\n%s e %s nao sao anagramas", vex, vix); /*Se falso, desconfirma*/
   }
}

int main()
{
   char x[5];
   printf("Digite uma palavra com quatro letras:\n");
   scanf("%s", &x); /*E declarado uma string de apenas quatro letras, como avisado*/
   anagr(x);
   return 0;
}
