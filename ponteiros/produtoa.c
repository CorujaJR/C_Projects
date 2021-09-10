#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    printf("O valor do produto: %f reais", atof(argv[1])*((100-atof(argv[2]))/100));
    return 0;
}