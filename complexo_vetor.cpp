#include <conio.h>
#include <stdio.h>
main()
{
	int vetor5[]= {9,-3,7,8,5};
    int i, iguais_maior= 0, positivos = 0, negativos = 0;
    float media = 0, soma = 0, perc_maior = 0;
    for (i=0; i<=4; i++)
	{
        soma = soma +vetor5[i];
        media= soma /5;
            if (vetor5[i] > media)
                iguais_maior = iguais_maior +1;
            if (vetor5[i] >= 0)
                positivos = positivos + 1;
            else    
                negativos = negativos + 1;
                
        printf("\n Valor do vetor5 na posicao [%d] = %d", i,vetor5[i]);
         }
         perc_maior = (iguais_maior *100) / 5;
         printf ("\n\n A soma foi.: %f \n A media foi.: %f \n %f %% dos elementos sao maiores ou iguais a media geral. \n %f sao iguais ou maiores do que a media \n %d sao positivos \n %d sao negativos", soma, media, perc_maior, iguais_maior, positivos, negativos);
         getch();
}
