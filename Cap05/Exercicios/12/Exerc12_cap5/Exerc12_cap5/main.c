#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, soma = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            if(i == n) //calcule a soma de todos os
                       // divisores desse n�mero, com exce��o dele pr�prio
                break;

            soma += i; // realiza a soma dos divisores do numero
        }

    }
    printf("A soma e %d\n\n", soma);

    system("pause");
    return 0;
}
