#include <stdio.h>
#include <stdlib.h>


/* Operador Ternário (?)

    Sintaxe:

            expressao condicional ? expressao 1 : expressão 2;


    - Simplificação do comando if-else com apenas um comando e não um bloco de comandos

    Funcionamento:

                    Idêntico ao do comando if-else

    - Se a condição for VERDADEIRA: expressão 1 será o resultado da expressão condicional

    - Se a condição for FALSA: o valor da expressão 2 será o resultado da expressão condicional


*/

int main()
{
    int x, y, z;

    printf("Digite x: ");
    scanf("%d", &x);

    printf("Digite y: ");
    scanf("%d", &y);

    /* Método if-else

        if(x>y)
            z=x;
        else
            z=y;
    */

    z = x > y ? x : y;  // Operador ternário de acordo com sua sintaxe

    printf("Maior = %d\n", z);


    system("pause");
    return 0;
}
