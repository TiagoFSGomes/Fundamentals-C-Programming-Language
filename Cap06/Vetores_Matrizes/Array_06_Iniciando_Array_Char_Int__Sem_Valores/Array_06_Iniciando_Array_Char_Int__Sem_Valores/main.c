#include <stdio.h>
#include <stdlib.h>

/*

Na inicialização de um array, não é necessário definir o
valor de todas as suas posições. As posições não definidas serão inicializadas
com o valor ZERO ou o caractere correspondente ao valor ZERO






*/


int main()
{
    int i;

    //arrays foram definidos com tamanho 10

    float v1[10] = {1,2,3};

    int v2[10] = {11,22,33};

    char str[10] = "joao";

    for (i=0; i< 10; i++)
        printf("% .1f" ,v1[i]);
        printf("\n");

    printf("\n");

    for (i=0; i< 10; i++)
         printf("% d" ,v2[i]);
        printf("\n");

    printf("\n");


    for (i=0; i< 10; i++)
         printf("%c", str[i]);


    printf("\n\n");

    system("pause");
    return 0;
}
