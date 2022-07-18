#include <stdio.h>
#include <stdlib.h>

/* Vírgulas são usadas para separar argumentos de uma função:

                int minha_funcao (int a, int b);

    Para determinar uma lista de expressões que devem ser executadas sequencialmente:

                x = (y = 2, y + 3);

    Observação: Na linguagem C o operador (,) é um separador de comandos,
    enquanto o operador (;) é um terminador de comandos

*/

int main()
{
    int x, y;

    /* Valor 2 é atribuído a y, o valor 3 é somado a y, e o total 5 atribuído a x

        Sempre da esquerda para direita as expressões são executadas
    */

    x = (y = 2, y + 3);
    printf("x = %d\n", x);

    system("pause");
    return 0;
}
