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

//EXEMPLO 02

void troca(int a, int b); // prot�tipo da fun��o

int main()
{

    int a, b;
    printf("Dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Antes de troca \n");
    printf("a= %d e b=%d \n",a,b);

    /*  A chamada de troca() em main(),
        resulta na passagem da c�pia dos valores
        de a e b de main() para as novas vari�veis a
        e b que s�o criadas em troca()*/

    troca(a,b);
    printf("Depois de troca \n");

    printf("a= %d e b=%d \n",a,b);
}

/*Assim, dentro da fun��o troca() quaisquer
altera��es de a e b n�o resultar�o em
modifica��es de a e b em main(), pois o que
est� sendo alterado � apenas uma c�pia.*/

void troca(int a, int b)
{

    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
