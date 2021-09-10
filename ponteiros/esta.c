#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    if (0 <= (atof(argv[3])+atof(argv[4])/60) - (atof(argv[1])+atof(argv[2])/60))
	{   
	   printf("%f", ((atof(argv[3])+atof(argv[4])/60) - (atof(argv[1])+atof(argv[2])/60))*4);
	}
	else
	{
       printf("%f", (((atof(argv[3])+atof(argv[4])/60) - (atof(argv[1])+atof(argv[2])/60))+24)*4);
	}
	return(0);
}