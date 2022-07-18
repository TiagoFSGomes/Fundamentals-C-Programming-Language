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

//EXEMPLO 01

void soma_mais_um(int n){ // n = x = 5

    n = n + 1; //x = 5 + 1 = 6
    printf("Dentro da funcao: x = %d\n",n);
}
 // Quando a função termina os valores de dentro da função são perdidos

int main()
{
    int x = 5;

    printf("Antes da funcao: x = %d\n", x); // x = 5

    //chamando a função criada:

    soma_mais_um(x);

    printf("Antes da funcao: x = %d\n", x); // x = 5





    system("pause");
    return 0;
}
