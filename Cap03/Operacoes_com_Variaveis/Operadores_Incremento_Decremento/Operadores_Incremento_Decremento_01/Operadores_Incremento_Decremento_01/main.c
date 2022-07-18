#include <stdio.h>
#include <stdlib.h>

/* Operadores Incremento e Decremento

    ++ incremento ++x (pr�-incremento) ou x++ (p�s-incremento)

    -- drecremento --x (pr�-decremento) ou x++ (p�s-decremento)

    Observa��es:

    ++x: soma +1 a vari�vel x antes de utilizar seu valor
    x++: soma +1 a vari�vel x depois de utilizar seu valor

    --x: subtrai -1 da vari�vel x antes de utilizar seu valor
    x--: subtrai -1 da vari�vel x depois de utilizar seu valor

*/

int main()
{

    // A diferen�a de sintaxe n�o afetar�o resultado
    // se for utilizado operador sozinho

    int x = 30, y = 30;
    ++x; //pr�-incremento
    printf("x = %d\n", x);

    y++;//p�s-incremento
    printf("y = %d\n", y);

    system("pause");
    return 0;
}
