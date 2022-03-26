#include <conio.h>
#include <stdio.h>
main()
{
	int numero = 1, conta_pares = 0;
		while  (conta_pares <10)
		{
			if (numero % 2 == 0)
			{
				printf ("\n O numero %d = par.", numero);
				conta_pares = conta_pares + 1;
			}
		numero = numero + 1;
		}
getch ();
}
