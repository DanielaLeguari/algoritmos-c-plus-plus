#include <conio.h>
#include <stdio.h>
main()
{
	float n1, n2, n3 ;
	printf ("Digite o valor de N1.:");
	scanf(" %f", &n1);
	printf ("Digite o valor de N2.:");
	scanf(" %f", &n2);
	printf ("Digite o valor de N3.:");
	scanf(" %f", &n3);
		
		if ((n1 >= n2) && (n1 >= n3))
			printf ("O maior � o .:%f", n1);
	 if ((n1 >= n2) && (n1 >= n3)) 
            printf ("O maior � o .:%f", n1);
       else if ((n2 >= n1) && (n2 >=n3))
          printf ( "O maior � o .:%f", n2);
       else
          printf ("O maior � o.:%f", n3);

        if ((n1 <= n2) && (n1 <=n3))
          printf ("O menor � o.:%f", n1);
        else if ((n2 <= n1) && (n2 <=n3))
          printf ("O menor � o .:%f", n2);
        else
          printf ("O menor � o.:%f", n3);
          	getch();
}
