#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    printf("\n\nCentenas: %d\n Dezenas: %d\nUnidades: %d\n\n", (atoi(argv[1])-(atoi(argv[1])%100))/100, (atoi(argv[1])-(atoi(argv[1])-(atoi(argv[1])%100))-(atoi(argv[1])%10))/10, atoi(argv[1])-(atoi(argv[1])-(atoi(argv[1])%100))-(atoi(argv[1])-(atoi(argv[1])-(atoi(argv[1])%100))-(atoi(argv[1])%10)));
    return(0);
}	