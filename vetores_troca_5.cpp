#include <conio.h>
#include <stdio.h>
main()
{
	int  a [] = {9,3,7,6,21};
    int  b [] = {50,45,36,2,14};
    int  c [5];
    	printf ("\nValores originais.:");
     		for ( int j= 0; j<=4; j++)
        {
            printf ("\nA [%d] = %d - \n", j, a[j]);
            printf ("\nA [%d] = %d - \n", j, b[j]);
        }
              for ( int j= 0; j<=4; j++)
        {
            c [j]= a [j];
            a [j] = b [j];
            b [j] = c [j];
        }
        printf ("\nValores trocados.:");
        for ( int j= 0; j<=4; j++)
        {
            printf ("\nA [%d] = %d - \n", j, a[j]);
            printf ("\nA [%d] = %d - \n", j, b[j]);
        }
        getch();
    }
