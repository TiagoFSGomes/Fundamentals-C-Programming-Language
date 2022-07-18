#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3];
    int i, j;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
             printf("Digite o valor de cada elemento da matriz [%d][%d]: ",i,j);
             scanf("%d", &mat[i][j]);
        }

    }
    // Laço for para impresso da matriz gerada
    printf("\nA matriz gerada e:\n");
    printf("\n===============================\n");
    for(i = 0; i < 3; i++){
        for(j=0; j<3; j++){
        printf("%d ", mat[i][j]);
        }
    printf("\n");
    }
    printf("\n===============================\n");


    system("pause");
    return 0;
}
