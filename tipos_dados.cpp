#include <conio.h>
#include <stdio.h>
main()
{
	float salario;
	int idade;
	char nome[30]; // = "Daniela";
	
	//salario = 2000;
	//idade = 18;
	
	printf("Digite o seu nome = ");
	scanf("%s", nome);
	printf("Digite o sua idade = ");
	scanf("%d", &idade);
	printf("Digite o seu salario = ");
	scanf("%f", &salario);
	
	printf("Seu nome = %s",nome);
	printf("Sua idade = %d",idade);  //%d tipo inteiro
	printf("O salario = %f",salario);
	printf("\n.............fim...................");
	getch();
	
}


