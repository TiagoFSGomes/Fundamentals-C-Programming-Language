#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, menor, maior;

    for(i = 0; i < 3; i++){
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(i == 0)  // Somente ocorre quando i==0
        {
            menor = n;
            maior = n;

            continue; // essa itera��o do la�o � ignorada e passa para pr�xima itera��o do la�o.
        }
        if(menor > n)
            menor = n;
        if(maior < n)
            maior = n;
    }

    printf("menor valor = %d, maior valor = %d\n\n", menor, maior);

    system("pause");
    return 0;

}
