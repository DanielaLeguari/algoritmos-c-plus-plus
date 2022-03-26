#include <conio.h>
#include <stdio.h>
main()
{
	float fixo, num_sistema, salario_total;
	fixo = 500;
	printf ("\nDigite o valor de sistemas vendidos no mês = ");
	scanf(" %f", &num_sistema);
	salario_total = (num_sistema * 50) + 500;
	 
	printf ("\nO saldo fixo :  %f", fixo);
	printf ("\nO numero de sistemas vendidos :  %f", num_sistema);
	printf ("\nO salario total :  %f", salario_total);
	getch();
}



