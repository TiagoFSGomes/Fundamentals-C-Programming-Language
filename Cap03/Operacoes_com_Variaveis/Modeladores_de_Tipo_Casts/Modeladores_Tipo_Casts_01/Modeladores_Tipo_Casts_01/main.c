#include <stdio.h>
#include <stdlib.h>

/* Modeladores de Tipos (casts)

    Também chamados de type cast são uma forma explícita de conversão de tipo

    Sintaxe:
                (nome_do_tipo) expressão

    Tipo é colocado a frente da expressão com objetivo de forçar o resultado da expressão a
    ser do tipo especificado
*/

int main()
{
    float x, y, f = 65.5;

    x = f / 10.0;

    y = (int) (f/10.0); //modelador de tipo

    printf("x = %.3f\n", x);
    printf("y = %.3f\n", y);


    system("pause");
    return 0;
}
