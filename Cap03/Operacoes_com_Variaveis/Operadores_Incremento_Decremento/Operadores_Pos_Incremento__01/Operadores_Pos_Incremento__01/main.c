#include <stdio.h>
#include <stdlib.h>

int main()
{
    //atribui, depois incrementa

    int y, x = 10;
    y = x++; // Primeiro atribui o valor de x a vari�vel y e depois incrementa a vari�vel x
            // Primeiro  y = x e depois y = x++

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    system("pause");
    return 0;
}

