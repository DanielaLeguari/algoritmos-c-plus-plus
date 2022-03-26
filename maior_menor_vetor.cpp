#include <conio.h>
#include <stdio.h>
main()
{
	int maior_menor [10]; // [] = {22,3,7,8,15,9,11,7,6,4};
	int i, maior= 0, menor = 99999;
	for (i=0;i<=9;i++)
	{
	printf ("Digite o %d numero.:",i);
	scanf ("%d",&maior_menor[i]);
    }
    for (i=0;i<=9;i++)
    {
    	if (maior_menor[i] > maior)
    		maior = maior_menor [i];
    	if (maior_menor [i]< menor)
    		menor = maior_menor [i];
	}
	printf (" O maior numero e.: %d", maior);
	printf (" O menor numero e.: %d ", menor);
	getch();
}
	
	
