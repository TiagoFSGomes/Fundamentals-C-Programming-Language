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

 - Note que a fun��o void inic(int t[ ], int n)
  recebe um vetor de inteiros (sem indicar qual
  a sua dimens�o)(onde ele come�a) e um inteiro que indica qual
  o n�mero de elementos a iniciar (numero de posi��es).



*/


// fun��o imprimeV()
void imprimeV(int *t, int n){
    int i;
    for(i=1; i<n; i++){

        printf(" [%d] ", t[i]); // imprime o vetor chamado de t nomeado na fun��o
    }
    printf("\n\n");
}

 int main()
{
    //int v[10] = {51,52,53,54,55,56,57,58,59,60};
    int v[10];
    int i;


    // Mudando valores do vetor v.

   for(i=0; i<10; i++){
        v[i]=i;
   }

    // Impressao apos atribuicao.
    imprimeV(v,10);

    system("pause");
    return 0;

}
