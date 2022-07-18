#include <stdio.h>
#include <stdlib.h>

/* Operadores Incremento e Decremento

    ++ incremento ++x (pré-incremento) ou x++ (pós-incremento)

    -- drecremento --x (pré-decremento) ou x++ (pós-decremento)

    Observações:

    ++x: soma +1 a variável x antes de utilizar seu valor
    x++: soma +1 a variável x depois de utilizar seu valor

    --x: subtrai -1 da variável x antes de utilizar seu valor
    x--: subtrai -1 da variável x depois de utilizar seu valor

*/

int main()
{

    // A diferença de sintaxe não afetaráo resultado
    // se for utilizado operador sozinho

    int x = 30, y = 30;
    ++x; //pré-incremento
    printf("x = %d\n", x);

    y++;//pós-incremento
    printf("y = %d\n", y);

    system("pause");
    return 0;
}
