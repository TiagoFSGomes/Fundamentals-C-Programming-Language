#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cub[5][5][5]; //�ndice iniciando em 0 at� 4.
    int i,j,k;

    //preenche o array de 3 dimens�es com zeros com 125 posi��es

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            for(k=0; k<5; k++){
                cub[i][j][k] = 0;
                cub[0][1][0] = 99; //modificando valor
            }
        }
    }


// La�o for para impresso da matriz gerada
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
