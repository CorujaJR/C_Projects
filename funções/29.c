#include <stdio.h>

void provares(char qpa[100][10])
{
   int n=0, i=0, m=0, rest[100]; /*� declarado um inteiro pra contar as respostas corretas e um vetor pra dar um resultado*/
   char resp[10]="bacadbbdca"; /*� declarado tamb�m uma string com o gabarito da prova*/
   while(n < 100)
   {
      while(i < 10)
      {
          if(qpa [n][i] == resp[i]) /*Compara-se o caracter da matriz com o caracter da string do gabarito*/
          {
              m++;
              i++;
          }
          else
          {
              i++;
          }
      }
      rest[n]=m; /*O vetor de resultado recebe a soma dos acertos*/
      m=0; /*Assim como a coluna, os acertos s�o resetados pra pr�xima linha, de fato, o proximo aluno*/
      i=0;
      n++;
   }
   printf("\n\nResultados:\n");
   for(n=0; n<100; n++)
   {
      printf("%d\n", rest[n]); /*� impressa o vetor de resultados*/
   }
}

int main()
{
   char fie[100][10]; /*Como se trata de inserir as respostas dadas pelos alunos, utilizasse string (vetor de char)*/
   int countl, countc;
   printf("Digite os resultado das 10 questoes dados pelos 100 alunos:\n");
   for(countl=0; countl < 100; countl++)
   {
      for(countc=0; countc < 10; countc++)
      {
         scanf(" %c", &fie[countl][countc]); /*Como estamos mexendo com caracter, temos que ler um caracter, o espa�o ap�s a aspa � uma esp�cie de macete pra impedir que o enter seje contado como caracter*/
      }
      printf("\n");
   }
   provares(fie);
   return 0;
}
