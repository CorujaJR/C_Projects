#include <stdio.h>

int main()
{
    double prdt, pctg; 
    printf("Digite o valor do produto: ");
    scanf("%lf", &prdt);
    printf("Descreva a porcentagem do desconto: ");
    scanf("%lf", &pctg);
    printf("\n\n\nValor do produto: %f reais.", prdt*((100-pctg)/100));
    return 0;
}