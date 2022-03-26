#include <conio.h>
#include <stdio.h>
main()
{
	float valor_fixo, comissao, venda_mes, salario;
	valor_fixo = 800;
	printf ("\nDigite o valor das vendas no mes= ");
	scanf(" %f", &venda_mes);
	comissao = (venda_mes * 15) / 100;
	salario = valor_fixo + comissao;
	 
	printf ("\nO saldo fixo :  %f", valor_fixo);
	printf ("\nO valor de vendas :  %f", venda_mes);
	printf ("\nO valor da comissão :  %f", comissao);
	printf ("\nO salario total :  %f", salario);
	getch();
}



