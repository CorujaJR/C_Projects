#include <stdio.h>

int main()
{
    float te, vt, v, b, n, vn, vr, tv;
    printf("Informe numero total de eleitores: ");
    scanf("%f", &te);
    printf("Informe numero de votos validos: ");
    scanf("%f", &v);
    printf("Informe numero de votos brancos: ");
    scanf("%f", &b);
    printf("Informe numero de votos nulos: ");
    scanf("%f", &n);
    vn=te-(v+b+n);
	vt=v+b+n;
	if (te >= vt)
	{
	   v=(v/te)*100;
	   n=(n/te)*100;
	   b=(b/te)*100;
	   printf("\n\nTotal de Votos: %f;\nVotos em falta: %f.\n\nPercentual:\nVotos Validos: %f;\nVotos Brancos: %f;\nVotos Nulos: %f.", vt, vn, v, b, n);
	}
	else
	{
	   vr=vt-te;
	   tv=vt;
	   vt-=vr;
	   v=(v/vt)*100;
	   n=(n/vt)*100;
	   b=(b/vt)*100;
	   printf("\n\nTotal de Votos Informados: %f;\nTotal de Eleitores: %f;\nVotos Desnecessarios: %f.\n\nPercentual:\nVotos Validos: %f;\nVotos Brancos: %f;\nVotos Nulos: %f.", tv, te, vr, v, b, n);
	}
	return 0;
}
