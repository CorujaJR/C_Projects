#include <stdio.h>

int main()
{
    int imin, omin;
    float ihrs, ohrs;
    printf("Informe somente as horas que estacionou: ");
    scanf("%f", &ihrs);
    printf("\t\t\tInforme minutos: ");
    scanf("%d", &imin);
    printf("\n      Informe somente as horas que saiu: ");
    scanf("%f", &ohrs);
    printf("\t\t\tInforme minutos: ");
    scanf("%d", &omin);
    if (0 <= ((ohrs+((float)omin/60)) - (ihrs+((float)imin/60))))
    {
	   printf("\n\n\nValor do estacionamento: %f reais.\n", 4*((ohrs+((float)omin/60)) - (ihrs+((float)imin/60))));
    }
    else
    {
	   printf("\n\nValor do estacionamento: %f reais.\n", 4*(((ohrs+((float)omin/60)) - (ihrs+((float)imin/60)))+24));
    }
    return 0;
}
