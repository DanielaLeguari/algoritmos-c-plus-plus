#include <conio.h>
#include <stdio.h>
main()
{
	float valor_saldo, cheque_entrou;
	printf ("Digite o valor do saldo inicial.:");
	scanf ("%f",&valor_saldo);
	printf ("Digite o valor do cheque. :");
	scanf ("%f",&cheque_entrou);
		if (cheque_entrou <= valor_saldo)
		{
			valor_saldo = valor_saldo- cheque_entrou;
			printf ("\n O seu novo saldo �.: %f", valor_saldo);
		}
		else
		{
			printf ("\nAten��o, este cheque n�o pode ser descontado.");
			printf ("\nSeu saldo continua.: %f", valor_saldo);
		}
	getch();
}
