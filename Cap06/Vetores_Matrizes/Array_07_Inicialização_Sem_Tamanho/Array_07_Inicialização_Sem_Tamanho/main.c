#include <stdio.h>
#include <stdlib.h>

/*

Sintaxe:

            tipo_dado nome_array[ ] = { dados };



Compilador da linguagem C vai contar quantos valores existem na
lista de dados definida para a inicializa��o do array.
Em seguida, ele vai considerar essa quantidade de valores como o tamanho do array.

A inicializa��o sem tamanho � muito �til quando n�o queremos contar quantos
caracteres ser�o necess�rios para inicializar um array de caracteres (tamb�m chamado
de string).


*/


int main()
{

    int i, j;

    //A string texto ter� tamanho 13
    //(12 caracteres + o caractere �\0�)
    char texto[] = "Linguagem C.";

    //O n�mero de linhas de matriz ser� 5.
    // � necess�rio sempre definir as dimens�es que existem al�m da primeira
    int matriz[][2] = {1,2,3,4,5,6,7,8,9,10};


     for (i=0; i<texto[i]; i++){
        printf("%c", texto[i]);
     }

    printf("\n\n"); //saltar duas linha

    for(i=0; i < 5; i++){
        for(j=0; j < 2; j++){
            printf("%d ", matriz[i][j]);

        }
    printf("\n");
    }

    printf("\n\n");


    system("pause");
    return 0;
}
