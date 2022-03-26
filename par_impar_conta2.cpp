#include <conio.h>
#include <stdio.h>
main()
{
	int numero_inicial, numero_final, numeros_pares, numeros_impares, i ;
	numeros_pares = 0;
    numeros_impares = 0;
    printf (" Digite o numero inicial.:");
    scanf ("%d",&numero_inicial);
    i = numero_inicial;
    do
    {
    printf ("\nDigite o numero final maior do que %d.:", numero_inicial);
    scanf ("%d",&numero_final);
    if (numero_final < numero_inicial)
    printf("Numero invalido, digite um numero maior que o inicial.");
	}
	while (numero_final < numero_inicial);
	
	while (i <= numero_final)
    {
		if (i % 2 == 0)
			numeros_pares++; // iguala numeros pares = numeros_pares + 1;
		else
			numeros_impares++; // igual a numeros impares = numeros_impares + 1;
		i++;
	}
    printf ("Entre o numero %d e o numero %d existem %d pares e %d impares", numero_inicial, numero_final, numeros_pares, numeros_impares);
    getch();
}
