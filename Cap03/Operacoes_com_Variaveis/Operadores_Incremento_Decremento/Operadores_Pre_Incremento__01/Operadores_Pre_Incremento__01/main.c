#include <stdio.h>
#include <stdlib.h>

int main(){

    /* Operador utilizado dentro de uma expressão artimética,
    a diferença entre os dois operadores será evidente.

    Abaixo segue a utilização do operador de  pré-incremento
    */

    int y, x = 10;

    //incrementa depois atribui

    y = ++ x; // equivale a y = x + 1 e depois atribui y = x

    printf("x = %d\n", x);

    printf("y = %d\n", y);

    system("pause");
    return 0;
}

