#include <conio.h>
#include <stdio.h>
main()
{
	float prova1,prova2, prova3, calc_media;
	printf ("Digite o valor da primeira prova:");
	scanf(" %f", &prova1);
	printf ("Digite o valor da segunda prova:");
	scanf(" %f", &prova2);
	printf ("Digite o valor da terceira prova:");
	scanf(" %f", &prova3);
	
	prova1 = prova1 * 2 / 10;
	prova2 = prova2 * 3 / 10;
	prova3 = prova3 * 5 / 10;
	calc_media = prova1 + prova2 + prova3;
	printf ("\nA media final: %f ", calc_media);
	
	getch();
}
