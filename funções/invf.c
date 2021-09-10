#include <stdio.h>

void troca(int *a, int *b)
{
    int c;
    c=*b;
    *b=*a;
    *a=c;
}

double pot(int b, int e)
{
    double c = (double)b;
    for( ; e!=1; e--)
    {
        c=c*b;
    }
    return c;
}

int main(int argc, char *argv)
{
    int w=5, k=10;
    troca(&w, &k);
    printf("%d - %d - %f", w, k, pot(w, k));
    return(0);
}
