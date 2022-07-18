#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for(i = 0, j = 100; i < j; i++, j--){ // uso de vírgulas dentro for é um separador de expressões e comando

        printf("i = %d e j = %d\n\n", i,j);

    }
    system("pause");
    return 0;
}
