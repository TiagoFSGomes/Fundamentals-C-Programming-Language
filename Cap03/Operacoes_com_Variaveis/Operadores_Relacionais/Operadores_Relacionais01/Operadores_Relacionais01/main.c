#include <stdio.h>
#include <stdlib.h>

/*Operadores relacionais retornam:
    Um (1) - se a express�o relacional for considerada veradeira
    Zero (0) - se a express�o relacional for considerada falsa

    Operadores:

    <  menor do que - x > 5
    <= menor ou igual a - x >= 5
    >  maior do que  - x < 5
    >= maior ou igual a  - x >= 5
    == igual a - x==0
    != diferente de - x!=0

*/

int main()
{
    int x = 5, y = 3;

    // Operadores relacionais s�o operadores de compara��o de valores
    printf("Resultado: %d\n", x > 4); //true (1)
    printf("Resultado: %d\n", x == 4); //false (0)
    printf("Resultado: %d\n", x != 4); //true (1)
    printf("Resultado: %d\n", x != y + 2); //false (0)

    system("pause");
    return 0;
}
