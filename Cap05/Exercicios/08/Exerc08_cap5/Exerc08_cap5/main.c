#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, n, soma=0;
    float media=0;

    for(cont=0; cont<3; cont++){

        printf("Digite uma numero inteiro: ");
        scanf("%d", &n);
        soma += n;

    }

    printf("\n=======================\n");
    printf("\nmedia: %.3f\n\n", media = soma /3);


    system("pause");
    return 0;
}
