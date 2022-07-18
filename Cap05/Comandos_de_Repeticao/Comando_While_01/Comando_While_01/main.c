#include <stdio.h>
#include <stdlib.h>

/* Comando While

    Sintaxe:

        while(condição){


            sequência de comandos;
        }

*/




int main()
{
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("\n-----------------------------------\n");

    while(a < b){ // enquanto a for menor que b faça

        a += 1; // a = a + 1
        printf("%d \n\n", a);

    }

    system("pause");
    return 0;
}
