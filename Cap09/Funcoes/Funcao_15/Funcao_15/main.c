#include <stdio.h>
#include <stdlib.h>
/*
------------->TIPOS DE PASSAGEM DE PAR�METROS<-------------

Para passar a informa��o de um trecho de c�digo para dentro
da fun��o. Mas existem dois tipos de passagem de par�metro:
passagem POR VALOR e POR REFER�NCIA.

----------------------->POR VALOR<-----------------------
- � o modo padr�o para os tipos b�sicos (int, char, float, ...)
- uma c�pia do(s) dado(s) � passada para a fun��o

*/

//EXEMPLO 01

void soma_mais_um(int n){ // n = x = 5

    n = n + 1; //x = 5 + 1 = 6
    printf("Dentro da funcao: x = %d\n",n);
}
 // Quando a fun��o termina os valores de dentro da fun��o s�o perdidos

int main()
{
    int x = 5;

    printf("Antes da funcao: x = %d\n", x); // x = 5

    //chamando a fun��o criada:

    soma_mais_um(x);

    printf("Antes da funcao: x = %d\n", x); // x = 5





    system("pause");
    return 0;
}
