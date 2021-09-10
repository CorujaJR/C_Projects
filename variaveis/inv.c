#include <stdio.h>

int main()
{
    long int a, b;
    printf("Digite um inteiro pra a: ");
    scanf("%li", &a);
    printf("Digite um inteiro pra b: ");
    scanf("%li", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\n\nValor a: %li\nValor b: %li\n\n", a, b);
    return(0);
}
