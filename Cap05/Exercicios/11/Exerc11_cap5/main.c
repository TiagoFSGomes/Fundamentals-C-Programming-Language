#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("=================================================================\n");
    printf("\nDigite um numero inteiro positivo para obter seus divisores\n");
    printf("\n===============================================================\n");
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    if(n<=0)
    {
        printf("\nDigite somente numero positivo\n\n\n"); //Evitar que usuário digite numero negativo ou zero
    }
    else
    {
        if(n>0)
            for(i = 1; i <= n; i++)
            {
                if(n % i == 0)
                    printf("O divisor de %d e: %d\n\n\n",n,i);
            }
    }

    printf("Fim do programa!\n\n\n");
    system("pause");
    return 0;
}
