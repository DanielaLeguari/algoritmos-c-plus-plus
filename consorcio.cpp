#include <conio.h>
#include <stdio.h>
main()
{
	float total_prest, qtd_prest_pagas, valor_prest, total_pago, saldo_devedor;
	      
	printf("\nDigite o total de prestações.");
	scanf("%f", &total_prest);
	printf ("\nDigite o total de prestações pagas.");
	scanf ("%f", &qtd_prest_pagas);
	printf ("\nDigite o valor da prestação.");
	scanf ("%f", &valor_prest);

    total_pago = qtd_prest_pagas * valor_prest;
    saldo_devedor = valor_prest * (total_prest - qtd_prest_pagas);
   
    printf ("\n O total pago: %f", total_pago);
    printf ("\n o saldo devedor: %f", saldo_devedor);

	 getch();
}
