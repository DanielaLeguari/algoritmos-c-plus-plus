#include <conio.h>
#include <stdio.h>
main()
{
	int mes;
	printf ("Digite o número do mes de 1 a 12.:");
	scanf ("%d",&mes);
	
	switch (mes)
	{
		case 1:printf ("O mês = janeiro");break;
		case 2:printf ("O mês = Fevereiro");break;
		case 3:printf ("O mês = março");break;
		case 4:printf ("O mês = abril");break;
		case 5:printf ("O mês = maio");break;
		case 6:printf ("O mês = junho");break;
		case 7:printf ("O mês = julho");break;
		case 8:printf ("O mês = agosto");break;
		case 9:printf ("O mês = setembro");break;
		case 10:printf ("O mês = outubro");break;
		case 11:printf ("O mês = novembro");break;
		case 12:printf ("O mês = dezembro");break;
		default:printf ("O mes não existe");
	}
	getch();
}


