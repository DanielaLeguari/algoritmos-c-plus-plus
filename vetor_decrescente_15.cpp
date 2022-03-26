#include <conio.h>
#include <stdio.h>
main()
{ 
	  int  a [] = {9,3,7,6,21,50,45,36,2,8,7,9,42,32,18};
        int  aux;
       
        for ( int j= 0; j<=14; j++)
        printf ("\nA [%d] = %d - ", j, a[j]);
        
        for ( int j= 0; j<=13; j++)
        for ( int i= 0; i<=13; i++)
            if (a[i] < a [i+1])
        {
            aux = a [i];
            a [i] = a [i+1];
            a [i+1] = aux;
        }
        printf ("\n\n Valores ordenados.:");
        for ( int j= 0; j<=14; j++)
        printf ("\nA [%d] = %d - ", j, a[j]);
       getch();
   }
