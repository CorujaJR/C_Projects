#include <stdio.h>

int main()
{
    int i, b[30];
    for(i=0; i<30; i++) //numero primo = i/(i/2)//
    {
        b[i]=i;
        printf("%d  -  %p\n", b[i], &b[i]);
    }
    return(0);
}
