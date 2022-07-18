#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, lista[5] = {3,18,2,51,45};

    int Maior = lista[0]; // armazena o maior elemento do vetor
                         // inicializada com o valor de um dos elementos do vetor. Valor do índice 0
                         //essa variável auxiliar será comparada a todo o restante do vetor, portanto ela deverá conter um valor que exista nele

    for(i=1; i<5; i++)
    {
        /*se o valor contido em uma das
          posições do vetor for maior do que o
          valor contido na variável auxiliar, esta deverá
          receber o valor dessa posição*/

        if(Maior < lista[i])
            Maior = lista[i];
    }

    printf("Maior = %d\n", Maior);


    system("pause");
    return 0;
}
