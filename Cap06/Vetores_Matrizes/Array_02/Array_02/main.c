#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5] = {1,2,3,4,5}; // {1,2,3,4,5} atribui valor a cada posição do array
    int v1[5];

    //  v1 = v ERRADO! não supporta atribuição de array por outro.

    int i;

    for(i=0; i<5; i++){
        v1[i] = v[i]; // Correto é copiar seus valores, elemento por elemento para outro array
        printf("%d\n\n", v1[i]);
    }

    system("pause");
    return 0;
}
