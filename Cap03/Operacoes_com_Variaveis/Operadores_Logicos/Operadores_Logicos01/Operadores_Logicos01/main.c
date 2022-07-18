#include <stdio.h>
#include <stdlib.h>


/*Operadores Lógicos:

    Permitem representar situações lógicas unindo duas ou mais expressões relacionais

    &&  operador E - ( x >= 0 && x <= 9) / Retorna true (Valor lógico - 1) somente se ambas expressões forem true. Senão Valor lógico - 0)

    || operador OU - ( a == 'F' || b != 32) / Retorna true (Valor lógico - 1) se alguma das expressões forem true. Senão Valor lógico - 0

    ! operador de NEGAÇÃO  - !(x == 10) / Inverte o valor lógico da expressão

*/

int main()
{
    int r, x = 5, y = 3;

    r = (x > 2) && (y < x); //true (1)
    printf("Resultado: %d\n",r);

    r = (x % 2 == 0) && (y > 0); //false (0)
    printf("Resultado: %d\n",r);

    r = (x > 2) || (y > x); //true(1)
    printf("Resultado: %d\n",r);

    r = (x % 2 == 0) || (y < 0); //false (0)
    printf("Resultado: %d\n",r);

    r = !(x > 2); //false(0)
    printf("Resultado: %d\n",r);

    r = !(x > 7) && (x > y); //true (1)
    printf("Resultado: %d\n",r);


    system("pause");
    return 0;
}
