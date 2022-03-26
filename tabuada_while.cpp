#include <conio.h>
#include <stdio.h>
main()
{
	int numero, i;
	printf ("Digite um numero.:");
	scanf ("%d",&numero);
	
		i = 1;  // iniciar a variável, colocar a condição e tua incrementação senão vai travar;
		while (i <= 9)
		    {
		    	printf ("\n%d X %d = %d", numero, i, (numero * i));
		    	i++; //i= i+1
			}
getch();
		}
			
	
