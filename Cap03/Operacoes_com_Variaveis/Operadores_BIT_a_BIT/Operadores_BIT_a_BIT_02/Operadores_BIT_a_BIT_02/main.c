#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x, y;
    x = 44;
    printf("x = %d\n", x);

    /* & E bit a bit
    Um BIT terá valor um (1) na expressão resultante somente se
    as expressões unidas por este operador possuir valor um (1) nos
    bits daquela posição.

                00101100 = x (valor igual a 44 em decimal)
                10100111 = 167
              -------------
                00100100 = x & 167 (valor igual a 36 em decimal)

    */

    y = x & 167;
    printf("x & 167 = %d\n", y);

   /* | OU bit a bit
    Um BIT terá valor um (1) na expressão resultante se alguma
    das expressões unidas por este operador possuir valor um (1) nos
    bits daquela posição.

                00101100 = x (valor igual a 44 em decimal)
                10000001 = 129
              -------------
                10101101 = x | 129 (valor igual a 173 em decimal)

    */

    y = x | 129;
    printf("x | 129 = %d\n", y);


    /*  ^ OU exclusivo
    Um BIT terá valor um (1) na expressão resultante se ambas
    das expressões unidas por este operador possuir valores diferentes
    de bits daquela posição.

                00101100 = x (valor igual a 44 em decimal)
                10100111 = 167
              -------------
                10001011 = x ^ 167 (valor igual a 139 em decimal)

    */
    y = x ^ 167;
    printf("x ^ 167 = %d\n", y);

    system("pause");
    return 0;
}
