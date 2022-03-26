#include <conio.h>
#include <stdio.h>
main()
{
	int numero, i;
	printf ("Digite um numero.:");
	scanf ("%d",&numero);
	
		i = 1;  // iniciar a variável, colocar a condição e tua incrementação senão vai travar;
		do
		    {
		    	printf ("\n%d X %d = %d", numero, i, (numero * i));
		    	i++; //i= i+1
			}
	    while (i <= 9); // ponto e virgula obrigatório;
getch();
		}
