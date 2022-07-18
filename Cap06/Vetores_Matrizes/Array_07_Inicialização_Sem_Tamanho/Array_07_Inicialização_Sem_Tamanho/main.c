#include <stdio.h>
#include <stdlib.h>

/*

Sintaxe:

            tipo_dado nome_array[ ] = { dados };



Compilador da linguagem C vai contar quantos valores existem na
lista de dados definida para a inicialização do array.
Em seguida, ele vai considerar essa quantidade de valores como o tamanho do array.

A inicialização sem tamanho é muito útil quando não queremos contar quantos
caracteres serão necessários para inicializar um array de caracteres (também chamado
de string).


*/


int main()
{

    int i, j;

    //A string texto terá tamanho 13
    //(12 caracteres + o caractere ‘\0’)
    char texto[] = "Linguagem C.";

    //O número de linhas de matriz será 5.
    // é necessário sempre definir as dimensões que existem além da primeira
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
