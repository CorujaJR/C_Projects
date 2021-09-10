#include <stdio.h>

void troca(int *a, int *b)
{
    int c;
    c=*b;
    *b=*a;
    *a=c;
}

int main(int argc, char *argv)
{
    int w=5, k=10;
    troca(&w, &k);
    printf("%d - %d", w, k);
    return(0);
}
