#include <stdio.h>
#include <stdlib.h>

/*

2) Crie um programa que leia do teclado seis valores inteiros e armazene em um vetor
e em seguida mostre na tela os valores lidos na ordem inversa.

*/


int main()
{
    int i, vet[6];

    printf("Digite 6 numeros inteiros.\n");

    for(i=0; i<6; i++)
    {
        printf("Digite o %d valor: ", (i+1));
        scanf("%d", &vet[i]);
    }

    printf("Resultado ordem decrescente:\n");
    for(i=5; i>=0; i--)
    {
        printf(" %d", vet[i]);
    }

    printf("\n");


    system("pause");
    return 0;
}
