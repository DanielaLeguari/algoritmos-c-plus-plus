#include <conio.h>
#include <stdio.h>
main()
{
    float  n1,n2,n3, n4, n5, calc_media, soma_notas;
    int contador;
    contador = 0;
	printf ("Digite a nota 1.:");
	scanf ("%f",&n1);
	printf ("Digite a nota 2.:");
	scanf ("%f",&n2);
	printf ("Digite a nota 3.:");
	scanf ("%f",&n3);
	printf ("Digite a nota 4.:");
	scanf ("%f",&n4);
	printf ("Digite a nota 5.:");
	scanf ("%f",&n5);
		soma_notas = n1 + n2 + n3 + n4 + n5;
		calc_media =  soma_notas / 5;
     		if (n1 > calc_media) 
		    	contador = contador +1;
		    if (n2 > calc_media) 
		    	contador = contador +1;
		    if (n3 > calc_media) 
		     	contador = contador +1;
		    if (n4 > calc_media) 
		    	contador = contador +1;
		    if (n5 > calc_media) 
		    	contador = contador +1;
          		 	printf ("\nA media e: %f ", calc_media);
           		 	printf ("\n%i alunos ficaram com a nota acima da media", contador);
 getch();
}
