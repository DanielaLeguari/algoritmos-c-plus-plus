#include <conio.h>
#include <stdio.h>
main()
{
	float saldo, cheque;
	saldo = 500;
	printf ("Digite o valor do cheque:");
	scanf(" %f", &cheque);
	saldo = saldo - cheque;
	printf ("o saldo final é : %f",saldo);
	getch();
}
