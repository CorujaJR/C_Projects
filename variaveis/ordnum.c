#include <stdio.h>

int main()
{
    int n, c, d, u;
    printf("Informe um numero: ");
    scanf("%d", &n);
    c=(n-(n%100));
    d=(n-c-(n%10));
    u=n-c-d;
    printf("\n\nCentenas: %d\n Dezenas: %d\nUnidades: %d\n\n", c/100, d/10, u);
    return(0);
}
