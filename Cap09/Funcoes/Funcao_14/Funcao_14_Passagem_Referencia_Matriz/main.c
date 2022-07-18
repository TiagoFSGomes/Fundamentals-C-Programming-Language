#include <stdio.h>
#include <stdlib.h>


/*
    Passagem por referência de matriz:

    As notações a seguir funcionam para arrays com mais de uma dimensão.

    Mas o array é tratado como se tivesse apenas uma dimensão dentro da função


                void imprime (int *m, int n);

                void imprime (int m[], int n);

*/

void imprime_matriz(int m[][2], int n){

    int i,j;

    for(i=0; i<n; i++){

        for(j=0; j<2; j++){

            printf("  %d", m[i][j]);
       }
    printf("\n");

    }


}

int main()
{
    /*Arrays com mais de uma dimensão precisam da informação do tamanho
    das outras dimensões



    */
    int mat[3][2] = {{1,2}, {3,4}, {5,6}}; //tres linhas e duas colunas.

    imprime_matriz(mat,3);

    system("pause");
    return 0;
}
