#include <stdio.h>
#include <stdlib.h>
/*
------------->TIPOS DE PASSAGEM DE PARÂMETROS<-------------

Para passar a informação de um trecho de código para dentro
da função. Mas existem dois tipos de passagem de parâmetro:
passagem POR VALOR e POR REFERÊNCIA.

----------------------->POR REFERÊNCIA - ARRAYS<-----------------------
 - Arrays são sempre passados por referência para uma função.

 - Além do PARÂMETRO DO ARRAY que será utilizado na função, é necessário declarar
um segundo parâmetro (em geral, uma variável inteira) para passar para a função o
TAMANHO DO ARRAY separadamente.

 - Passando um array por referência:

    void imprime(int *m, int n);
    void imprime(int m[], int n);
    void imprime(int m[5], int n);

 - Note que a função void imprime(int m[ ], int n)
  recebe um vetor de inteiros (sem indicar qual
  a sua dimensão) e um inteiro que indica qual
  o número de elementos a iniciar.



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
