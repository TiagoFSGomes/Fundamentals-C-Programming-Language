#include <stdio.h>
#include <stdlib.h>

int main(){

    /* Operador utilizado dentro de uma express�o artim�tica,
    a diferen�a entre os dois operadores ser� evidente.

    Abaixo segue a utiliza��o do operador de  pr�-incremento
    */

    int y, x = 10;

    //incrementa depois atribui

    y = ++ x; // equivale a y = x + 1 e depois atribui y = x

    printf("x = %d\n", x);

    printf("y = %d\n", y);

    system("pause");
    return 0;
}

