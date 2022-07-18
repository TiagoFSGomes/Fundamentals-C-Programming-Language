#include <stdio.h>
#include <stdlib.h>


/* Operador Tern�rio (?)

    Sintaxe:

            expressao condicional ? expressao 1 : express�o 2;


    - Simplifica��o do comando if-else com apenas um comando e n�o um bloco de comandos

    Funcionamento:

                    Id�ntico ao do comando if-else

    - Se a condi��o for VERDADEIRA: express�o 1 ser� o resultado da express�o condicional

    - Se a condi��o for FALSA: o valor da express�o 2 ser� o resultado da express�o condicional


*/

int main()
{
    int x, y, z;

    printf("Digite x: ");
    scanf("%d", &x);

    printf("Digite y: ");
    scanf("%d", &y);

    /* M�todo if-else

        if(x>y)
            z=x;
        else
            z=y;
    */

    z = x > y ? x : y;  // Operador tern�rio de acordo com sua sintaxe

    printf("Maior = %d\n", z);


    system("pause");
    return 0;
}
