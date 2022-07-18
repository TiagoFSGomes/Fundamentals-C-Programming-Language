#include <stdio.h>
#include <stdlib.h>

/* Modeladores de Tipos (casts)

    Tamb�m chamados de type cast s�o uma forma expl�cita de convers�o de tipo

    Sintaxe:
                (nome_do_tipo) express�o

    Tipo � colocado a frente da express�o com objetivo de for�ar o resultado da express�o a
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
