#include <stdio.h>
#include <stdlib.h>
/*
------------->TIPOS DE PASSAGEM DE PAR�METROS<-------------

Para passar a informa��o de um trecho de c�digo para dentro
da fun��o. Mas existem dois tipos de passagem de par�metro:
passagem POR VALOR e POR REFER�NCIA.

----------------------->POR REFER�NCIA - ARRAYS<-----------------------
 - Arrays s�o sempre passados por refer�ncia para uma fun��o.

 - Al�m do PAR�METRO DO ARRAY que ser� utilizado na fun��o, � necess�rio declarar
um segundo par�metro (em geral, uma vari�vel inteira) para passar para a fun��o o
TAMANHO DO ARRAY separadamente.

 - Passando um array por refer�ncia:

    void imprime(int *m, int n);
    void imprime(int m[], int n);
    void imprime(int m[5], int n);

 - Note que a fun��o void imprime(int m[ ], int n)
  recebe um vetor de inteiros (sem indicar qual
  a sua dimens�o) e um inteiro que indica qual
  o n�mero de elementos a iniciar.



*/
void imprime (int *n, int m)
{
    int i;
    for (i=1; i<m; i++){
        printf(" %d", n[i]);
    }
    printf("\n");
    printf("Resultado ordem decrescente:\n");

    for(i = m-1; i>0; i--)
    {
        printf(" %d", n[i]);
    }
}
int main()
{
    int v[50];
    int i;
    //imprime(v,5);


    // Mudando valores do vetor v.

   for(i=0; i<=50; i++){
        v[i]=i;
   }
   imprime(v,50);

    printf("\n");

    system("pause");
    return 0;
}
