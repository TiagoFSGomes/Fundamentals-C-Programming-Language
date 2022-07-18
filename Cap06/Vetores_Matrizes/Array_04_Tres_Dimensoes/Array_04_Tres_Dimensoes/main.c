#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cub[5][5][5]; //índice iniciando em 0 até 4.
    int i,j,k;

    //preenche o array de 3 dimensões com zeros com 125 posições

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            for(k=0; k<5; k++){
                cub[i][j][k] = 0;
                cub[0][1][0] = 99; //modificando valor
            }
        }
    }


// Laço for para impresso da matriz gerada
    printf("\nA matriz gerada e:\n");
    printf("\n================================================\n");
    for(i = 0; i<5; i++){
        for(j=0; j<5; j++){
                for(k=0; k<5; k++){

                printf("%d ", cub[i][j][k]);

                }
        }
    printf("\n");
    }
    printf("\n================================================\n");


    system("pause");
    return 0;
}
