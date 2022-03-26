#include <conio.h>
#include <stdio.h>
main()
{
	float le, ld, li;
	
	printf("Digite o valor de  LE.: ");
	scanf ("%f",&le);
	printf("Digite o valor de  LD.: ");
	scanf ("%f",&ld);
	printf("Digite o valor de  LI.: ");
	scanf("%f",&li);
	
	if ((li < (le + ld)) && (le <(ld + li)) && (ld < (li + le))) 
            if ((le = ld) && (le = li) )
               printf ("Triangulo equilatero");
            else if ((li == ld) || (li == le) || (le == ld)) 
               printf ("Triangulo isosceles");
            else
                printf ("Triangulo escaleno");
            else           // ((ld <> le) && (ld <>li) && (li <> le)) 
                printf ("Não é um triangulo");
	
	getch();
}
