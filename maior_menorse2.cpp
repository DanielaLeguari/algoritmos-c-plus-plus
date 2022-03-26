#include <conio.h>
#include <stdio.h>
main()
{
	int n1, n2, n3 ;
	printf ("Digite o valor de N1.:");
	scanf(" %d", &n1);
	printf ("Digite o valor de N2.:");
	scanf(" %d", &n2);
	printf ("Digite o valor de N3.:");
	scanf(" %d", &n3);
          	
		if ((n1 >= n2) && (n1 >= n3)) 
       {
       	 printf ("\nO maior é o .:%d", n1);
       if (n2 <= n3)
          printf ("\nO menor é o .:%d", n2);
       else
           printf ("\nO menor é o .:%d", n3);
	   }  
       else if (( n2 >= n1) && (n2 >= n3)) 
       {
       	printf ("\nO maior é o .:%d", n2);
       if (n1 <= n3) 
           printf ("\nO menor é o .:%d", n1);
       else
           printf ("\nO menor é o .:%d", n3);
	   }
       else
       {
       	    printf ("\nO maior é o .:%d", n3);
       if (n2 <= n1) 
            printf ("\nO menor é o .:%d", n2);
       else
            printf ("\nO menor é o .:%d", n1);
	   }
getch();
}
