#include <conio.h>
#include <stdio.h>
main()
{
	float nota, calc_media, soma_notas= 0;
	int i;
	for (i=1;i<=10;i++)
	{
		printf ("Digite a %d. primeira das dez notas, entre 0 e 10.: ", i);
		scanf ("%f", &nota);
		if ((nota >= 0) && (nota <= 10))
		soma_notas = soma_notas + nota;
		else
		{
		printf ("\nNota invalida, digite a note de 0 a 10.\n");
		i--;  //i=i-1;
		 } 
    }
    calc_media = soma_notas / 10;
    printf("A media geral dos 10 = %f ",calc_media); 
    printf("\n..................FIM........................");
    getch(); //esperar uma tecla
}
	
