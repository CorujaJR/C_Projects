#include <stdio.h>
#include <stdlib.h>

double cel(double f)
{
    double x;
    x=5*(f-32);
    return x/9;
}

double far(double c)
{
    double y;
    y=9*c;
    return y/5+32;
}

int main(int argc, char **argv)
{
    char c;
    printf("Pressione c pra conveter pra Celsium ou f pra Farenheit: ");
    scanf("%c", &c);
    if((int)c == 99)
    {
        printf("%f", cel(atof(argv[1])));
    }
    else
    {
        printf("%f", far(atof(argv[1])));
    }
    return 0;
}
