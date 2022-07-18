#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 10, y = 20;

    /* Atenção o operador simplificado atua sobre o resultado da
    expressão seguinte a ele.

    Podendo mudar as precedências de multiplicações e divisões que são
    sempre realizadas antes de somas e subtrações.

    */

    //x = x * y - 10; // Precedência correta
    //printf("x = %d\n", x);

    x *= y - 10; // equivale a x = x * (y -10)
    printf("x = %d\n", x);

    //x = x - 5 + y; // Precedência correta
    //printf("x = %d\n", x);

    x -= 5 + y; // equivale a x = x - (5 + y)
    printf("x = %d\n", x);


    system("pause");
    return 0;


}
