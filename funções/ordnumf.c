#include <stdio.h>

void lenum(int ID)
{
    int U, D, C;
    U = ID%10;
    ID /= 10;
    D = ID%10;
    C = ID/10;
    printf("%d centenas, %d dezenas, %d unidades", C, D, U);
}

int main(int argc, char **argv)
{
    lenum(atoi(argv[1]));
    return 0;
}
