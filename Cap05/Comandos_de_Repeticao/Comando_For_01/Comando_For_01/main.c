#include <stdio.h>
#include <stdlib.h>

/* Comando For

    Sintaxe:

        for(inicializa��o; condi��o; incremento){


            sequ�ncia de comandos;
        }

*/

int main()
{
    int a, b, c; // vari�vel utilizada no for tamb�m precisa ser declarada.

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("\n-----------------------------------\n");

    for (c = a; c <= b; c++){

        printf("%d \n\n", c);

    }

    system("pause");
    return 0;
}
