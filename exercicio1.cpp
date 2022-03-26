#include <conio.h>
#include <stdio.h>
main()
{
	int a, b, auxiliar;
	a = 5;
	b = 10;
	auxiliar = a;
	a = b;
	b = auxiliar;
	printf ("\na = %d", a);
	printf ("\nb = %d", b);
	getch();
	
}
