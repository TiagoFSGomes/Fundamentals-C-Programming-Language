#include <stdio.h>
#include <stdlib.h>


int main()
{

    int i, soma = 0;

    /*soma de todos os números naturais abaixo de
    1.000 que são múltiplos de 3 ou 5.*/

    for(i = 1; i < 1000; i++)
    {
        if((i % 3 == 0) || (i % 5 == 0))

            soma += i;
    }

    printf("Soma: %d\n\n", soma);


    system("pause");
    return 0;
}
