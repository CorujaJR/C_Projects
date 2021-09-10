#include <stdio.h>

void trianret(double tri[50][2])
{
   double area[50]; /*O motivo do uso do double � que os calculos matem�ticos exigem precis�o em seus resultados*/
   int n;
   for(n=0; n < 50; n++) /*Nesse caso, tratasse na aplica��o da f�rmula do tri�ngulo ret�ngulo*/
   {
      area[n]=(tri[n][0]*tri[n][1])/2; /*Como as duas colunas represetam os dois catetos de um mesmo tri�ngulo, n�o � usado dois "whiles", pois est� preenchendo um vetor*/
   }
   printf("\n\nValores:\n");
   for(n=0; n<50; n++)
   {
      printf("%f\n", area[n]);
   }
}

int main()
{
   double fie[50][2];
   int countl, countc;
   printf("Digite o tamanho dos 2 lados de cada 5 triangulos:\n");
   for(countl=0; countl < 50; countl++)
   {
      for(countc=0; countc < 2; countc++)
      {
         scanf("%lf", &fie[countl][countc]);
      }
      printf("\n");
   }
   trianret(fie);
   return 0;
}
