#include <conio.h>
#include <stdio.h>
main()
{
	int numero, i;
	printf ("Digite um numero.:");
	scanf ("%d",&numero);
	
		i = 1;  // iniciar a vari�vel, colocar a condi��o e tua incrementa��o sen�o vai travar;
		while (i <= 9)
		    {
		    	printf ("\n%d X %d = %d", numero, i, (numero * i));
		    	i++; //i= i+1
			}
getch();
		}
			
	
