#include <conio.h>
#include <stdio.h>
main()
{
	int numero, i;
	printf ("Digite uo numero.:");
	scanf ("%d",&numero);
		for (i=1;i <=9; i++ ) //i++ é igual a = i=i+i;
			printf ("\n%d X %d = %d", numero, i, (numero * i));
getch();
}
