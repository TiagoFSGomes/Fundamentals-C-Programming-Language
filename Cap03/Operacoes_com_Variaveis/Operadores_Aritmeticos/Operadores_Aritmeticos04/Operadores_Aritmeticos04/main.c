#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;


    /* Numerador e denominador forem inteiros por padr�o
    O compilador retornar� apenas a parte inteira */

    x = 5 / 4;
    printf("x = %.3f\n", x);

    /* Denominador e um real, compilador retornar� um real*/
    x = 5 / 4.0;
    printf("x = %.3f\n", x);

    system("pause");
    return 0;
}
