#include <stdio.h>
#include <stdlib.h>

/* V�rgulas s�o usadas para separar argumentos de uma fun��o:

                int minha_funcao (int a, int b);

    Para determinar uma lista de express�es que devem ser executadas sequencialmente:

                x = (y = 2, y + 3);

    Observa��o: Na linguagem C o operador (,) � um separador de comandos,
    enquanto o operador (;) � um terminador de comandos

*/

int main()
{
    int x, y;

    /* Valor 2 � atribu�do a y, o valor 3 � somado a y, e o total 5 atribu�do a x

        Sempre da esquerda para direita as express�es s�o executadas
    */

    x = (y = 2, y + 3);
    printf("x = %d\n", x);

    system("pause");
    return 0;
}
