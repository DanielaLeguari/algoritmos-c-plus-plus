#include <conio.h>
#include <stdio.h>
main()
{
	float prest, valor_prestacao, taxa;
    int dias_atraso;
	      
	printf("\nDigite o valor das prestações.");
	scanf("%f", &valor_prestacao);
	printf ("\nDigite a taxa de juros.");
	scanf ("%f", &taxa);
	printf ("\nDigite o número de dias em atraso.");
	scanf ("%d", &dias_atraso);

    prest = valor_prestacao + (valor_prestacao * (taxa / 100) * dias_atraso);
   
    printf ("\n O valor corrigido é : %f", prest);
    

	 getch();
}
