#include <stdio.h>
#include <stdlib.h>
/*
------------->TIPOS DE PASSAGEM DE PARÂMETROS<-------------

Para passar a informação de um trecho de código para dentro
da função. Mas existem dois tipos de passagem de parâmetro:
passagem POR VALOR e POR REFERÊNCIA.

----------------------->POR VALOR<-----------------------
- é o modo padrão para os tipos básicos (int, char, float, ...)
- uma cópia do(s) dado(s) é passada para a função

*/

//EXEMPLO 02

void troca(int a, int b); // protótipo da função

int main()
{

    int a, b;
    printf("Dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Antes de troca \n");
    printf("a= %d e b=%d \n",a,b);

    /*  A chamada de troca() em main(),
        resulta na passagem da cópia dos valores
        de a e b de main() para as novas variáveis a
        e b que são criadas em troca()*/

    troca(a,b);
    printf("Depois de troca \n");

    printf("a= %d e b=%d \n",a,b);
}

/*Assim, dentro da função troca() quaisquer
alterações de a e b não resultarão em
modificações de a e b em main(), pois o que
está sendo alterado é apenas uma cópia.*/

void troca(int a, int b)
{

    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
