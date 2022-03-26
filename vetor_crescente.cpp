#include <conio.h>
#include <stdio.h>
main()
{ 
		int  a [] = {50,21,14};
        int  aux;

        printf (" O valor do vetor original.");
		printf ("\nO valor de A[1] = %d ",a[0]);
        printf ("\nO valor de A[2] = %d ",a[1]);
        printf ("\nO valor de A[3] = %d ",a[2]);
        for ( int percorre= 0; percorre<=1; percorre++)
        for ( int i= 0; i<=1; i++)
            if (a[i] > a [i+1])
           {
            aux = a [i];
            a [i] = a [i+1];
            a [i+1] = aux;
            };
        printf ("\n\nVetor em ordem crescente.:");
        printf ("\nO valor ordenado de A[1] = %d ", a[0]);
        printf ("\nO valor ordenado  de A[2] =%d ", a[1]);
        printf ("\nO valor ordenado de A[3] = %d", a[2]); 
       getch();
   }
