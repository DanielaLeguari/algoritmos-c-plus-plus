#include <conio.h>
#include <stdio.h>
main()
{
    float notas[5];
	float  calc_media, soma_notas;
    int contador;
    contador = 0;
	printf ("Digite a nota 1.:");
	scanf ("%f",&notas[0]);
	printf ("Digite a nota 2.:");
	scanf ("%f",&notas[1]);
	printf ("Digite a nota 3.:");
	scanf ("%f",&notas[2]);
	printf ("Digite a nota 4.:");
	scanf ("%f",&notas[3]);
	printf ("Digite a nota 5.:");
	scanf ("%f",&notas[4]);
		soma_notas = notas[0] + notas[1] + notas [2] + notas [3]+ notas[4];
		calc_media =  soma_notas / 5;
     		if (notas[0] >= calc_media) 
		    	contador = contador +1;
		    if (notas[1] >= calc_media) 
		    	contador = contador +1;
		    if (notas[2] >= calc_media) 
		     	contador = contador +1;
		    if (notas[3] >= calc_media) 
		    	contador = contador +1;
		    if (notas[4] >= calc_media) 
		    	contador = contador +1;
          		 	printf ("\nA media e: %f ", calc_media);
           		 	printf ("\n%i alunos ficaram com a nota acima da media", contador);
 getch();
}
