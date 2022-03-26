#include <conio.h>
#include <stdio.h>
main()
{
	int a, b, c ;
	printf ("Digite o valor de A.:");
	scanf(" %d", &a);
	printf ("Digite o valor de B.:");
	scanf(" %d", &b);
	printf ("Digite o valor de C.:");
	scanf(" %d", &c);
	
        if ((a <= b) && (a <= c ))
        	if (b <= c) 
          		printf ("Em ordem crescente ficou.:%d - %d - %d",a,b,c);
        else
            	printf("Em ordem crescente ficou.:%d - %d - %d",a,c,b);
    	else if ((b <= a) && (b <= c)) 
        	if (a <= c) 
            	printf("Em ordem crescente ficou.:%d - %d - %d",b,a,c);
        else
                printf("Em ordem crescente ficou.:%d - %d - %d",b,c,a);
        else
            if (a <= b) 
                printf("Em ordem crescente ficou.:%d - %d - %d",c,a,b);
        else
                printf("Em ordem crescente ficou.:%d - %d - %d",c,b,a);
           
    getch ();
}
         
