#include <stdio.h>
#include <stdlib.h>


/* Aninhamento de repetições:

    Sintaxe:

            repetição(condição 1){
                sequência de comandos;
                   repetição(condição 2){
                        sequência de comandos;
            }
        }

    Útil para percorrer dois conjuntos de valores que estão relacionados dentro de um programa.
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
