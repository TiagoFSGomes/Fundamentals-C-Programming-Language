#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, n, soma = 0;

    float media;

    printf("====================================================\n");
    printf("\nDigite 10 numeros na sequencia para obter a media\n");
    printf("\n====================================================\n");

    for(cont = 0; cont < 10; )
    {

        printf("\nDigite um numero: ");
        scanf("%d", &n);

        if(n > 0)  // se n for maior que zero (positivo)
        {
            soma += n;

            cont++; // o incremento é executado somente se o número for positivo
        }
    }
    media = soma / 10;
    printf("media e = %.2f\n\n\n\n", media);

    system("pause");
    return 0;
}
