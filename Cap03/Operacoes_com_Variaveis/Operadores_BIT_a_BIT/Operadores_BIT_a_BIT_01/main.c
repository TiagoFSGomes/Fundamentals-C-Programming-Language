#include <stdio.h>
#include <stdlib.h>


/* Operadores BIT a BIT

    Operadores:

    ~ complemento bit a bit
    & E bit a bit
    | OU bit a bit
    ^ OU exclusivo
    << deslocamnento de bits à esquerda
    >> deslocamento de bits à direita

*/

int main()
{
    unsigned char x, y;
    x = 44;
    printf("x = %d\n", x);

    // ~ complemento bit a bit inverte o valor dos 0 zeros e 1 uns que compõem o número
    // 44 decimal em binário = 0010110
    // 211 decimal em binário = 1101001
    y = ~x;
    printf("x = %d\n", y); // 211 decimal

    system("pause");
    return 0;
}
