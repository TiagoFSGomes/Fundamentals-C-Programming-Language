#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dia;

    printf("Digite um numero inteiro de 1 a 7\n");
    printf("Para retornar o dia da semana correspondente: ");
    scanf("%d", &dia);

    switch(dia){

        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-Feira\n");
            break;
        case 3:
            printf("Terca-Feira\n");
            break;
        case 4:
            printf("Quarta-Feira\n");
            break;
        case 5:
            printf("Quinta-Feira\n");
            break;
        case 6:
            printf("Sexta-Feira\n");
        break;
         case 7:
             printf("Sabado\n");
        break;
        default:
            printf("ATENCAO: Digite um numero do dia de 1 a 7.\n\n");

    }

    system("pause");
    return 0;
}
