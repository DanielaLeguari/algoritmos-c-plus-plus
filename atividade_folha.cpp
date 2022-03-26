#include <conio.h>
#include <stdio.h>
main()
{
	float salario_liquido, salario_bruto, inss;
	char nome_funcionario [30];
	      
	printf("\nDigite o nome do funcionario.");
	scanf("%s", nome_funcionario);
	printf ("\nDigite o salario bruto.");
	scanf ("%f", &salario_bruto);

    inss = (salario_bruto * 9) / 100;
    salario_liquido = salario_bruto - inss;
    printf ("\n O salario bruto: %f", salario_bruto);
    printf ("\n Desconto INSS: %f", inss);
    printf ("\n Salario liquido: %f", salario_liquido);
    
	getch();
}
