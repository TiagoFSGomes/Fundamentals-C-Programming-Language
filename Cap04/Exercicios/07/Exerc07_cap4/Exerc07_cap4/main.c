#include <stdio.h>
#include <stdlib.h>


#define mg 7/100
#define sp 12/100
#define rj 15/100
#define ms 8/100

int main()
{
    float produto;
    char destino;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    printf("Digite o estado de destino a - MG / b - SP / c - RJ / d - MS: ");
    scanf(" %c", &destino);

    switch(destino){

        case 'a':{
            printf("O estado de destino sera: MG\n");
            printf("O valor do produto e: %.2f\n", (produto * mg) + produto);
        }
        break;

        case 'b':{
            printf("O estado de destino sera: SP\n");
            printf("O valor do produto e: %.2f\n", (produto * sp) + produto);
        }
        break;

        case 'c':{
            printf("O estado de destino sera: RJ\n");
            printf("O valor do produto e: %.2f\n", (produto * rj) + produto);
        }
        break;

        case 'd':{
            printf("O estado de destino sera: MS\n");
            printf("O valor do produto e: %.2f\n", (produto * ms) + produto);
        }
        break;

        default:
                printf("Estado de destino invalido!");

}
    system("pause");
    return 0;
}
