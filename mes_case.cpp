#include <conio.h>
#include <stdio.h>
main()
{
	int mes;
	printf ("Digite o n�mero do mes de 1 a 12.:");
	scanf ("%d",&mes);
	
	switch (mes)
	{
		case 1:printf ("O m�s = janeiro");break;
		case 2:printf ("O m�s = Fevereiro");break;
		case 3:printf ("O m�s = mar�o");break;
		case 4:printf ("O m�s = abril");break;
		case 5:printf ("O m�s = maio");break;
		case 6:printf ("O m�s = junho");break;
		case 7:printf ("O m�s = julho");break;
		case 8:printf ("O m�s = agosto");break;
		case 9:printf ("O m�s = setembro");break;
		case 10:printf ("O m�s = outubro");break;
		case 11:printf ("O m�s = novembro");break;
		case 12:printf ("O m�s = dezembro");break;
		default:printf ("O mes n�o existe");
	}
	getch();
}


