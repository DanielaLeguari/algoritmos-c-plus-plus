#include <conio.h>
#include <stdio.h>
main()
{
	int numero, contador, i;
	contador = 0;
	i = 2;
	printf ("Digite um numero.: ");
	scanf ("%d",&numero);
	while ( i < numero)
	{
		if (numero % i == 0)
		contador = contador + 1;
	    i = i + 1;
	}
	if (contador > 0)
	printf (" O numero %d nao e primo.", numero);
	else
	printf (" O numero %d e primo.", numero);
	getch();
}
