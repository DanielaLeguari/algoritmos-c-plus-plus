#include <conio.h>
#include <stdio.h>
main()
{
	float custo_fabrica, perc_revendedor, impostos, valor_final;
	printf ("Digite o valor do automovel:");
	scanf(" %f", &custo_fabrica);
	//custo_fabrica = 40000;
	perc_revendedor = (25 * custo_fabrica) / 100;
	impostos = (45 * custo_fabrica) / 100;
	valor_final = custo_fabrica + perc_revendedor + impostos;
	printf ("\n O custo de fabrica = %f", custo_fabrica);
	printf ("\n percentual revendedor = %f", perc_revendedor);
	printf ("\n Impostos = %f", impostos);
	printf ("\n O valor final = %f", valor_final);
	getch();
}
