#include <stdio.h>
#include <stdlib.h>


/*Operadores L�gicos:

    Permitem representar situa��es l�gicas unindo duas ou mais express�es relacionais

    &&  operador E - ( x >= 0 && x <= 9) / Retorna true (Valor l�gico - 1) somente se ambas express�es forem true. Sen�o Valor l�gico - 0)

    || operador OU - ( a == 'F' || b != 32) / Retorna true (Valor l�gico - 1) se alguma das express�es forem true. Sen�o Valor l�gico - 0

    ! operador de NEGA��O  - !(x == 10) / Inverte o valor l�gico da express�o

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
