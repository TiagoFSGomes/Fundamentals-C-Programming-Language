#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5] = {15,12,9,1,35}; //Iniciando o array com valores inicando pela posição 0

    int matriz[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; //matriz 3x4


    int i, j;

    // para varrer todos elementos do vetor e mostrar seus valores iniciados
    for(i=0; i<5; i++){
        printf("%d ", vet[i]);
    }

    printf("\n\n");


    // para varrer todos elementos da matriz e mostrar seus valores iniciados
    for(i=0; i<3; i++){
        for(j=0; j<4;j++){
           printf("%d ", matriz[i][j]);
        }
    printf(" \n");
    }

    printf("\n\n");

    system("pause");
    return 0;
}
