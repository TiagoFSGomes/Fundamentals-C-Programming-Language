#include <stdio.h>
#include <stdlib.h>


/* Aninhamento de repeti��es:

    Sintaxe:

            repeti��o(condi��o 1){
                sequ�ncia de comandos;
                   repeti��o(condi��o 2){
                        sequ�ncia de comandos;
            }
        }

    �til para percorrer dois conjuntos de valores que est�o relacionados dentro de um programa.
*/

int main()
{
    int j,i;

    for(i=1; i<5; i++){
        for(j=1; j<5; j++){
            if(i==j)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
