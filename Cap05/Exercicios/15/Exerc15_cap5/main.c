#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, maior=0, menor;

    while(n > -1){

        printf("Digite um numero inteiro: ");
        scanf("%d",&n);

        if(n > maior)
            maior = n;
        else
            if(n < menor && n < -1)
            menor = n;
    }

    printf("Menor numero lido: %d\n\n", menor);
    printf("Maior numero lido: %d\n\n", maior);


    system("pause");
    return 0;
}
