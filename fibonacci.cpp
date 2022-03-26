#include <conio.h>
#include <stdio.h>
main()
{
	int i, num_anterior, num_atual, novo_numero;
	num_anterior = 0;
	num_atual = 1;
	printf ("O primeiro numero é 1.");
	for (i=2;i<=10;i++)
	{
		novo_numero = num_atual + num_anterior;
		num_anterior = num_atual;
		num_atual = novo_numero;
		printf ("\nO %d numero fibonacci é %d",i,novo_numero);
	}
	getch();
}
