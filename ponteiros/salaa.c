#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  printf("\nArea da sala de %fm2 e perimetro de %fm.\n\n\n\n", atof(argv[1])*atof(argv[2]), (2*atof(argv[1]))+(2*atof(argv[2])));
  return 0;
}
