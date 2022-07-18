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

 - Note que a função void inic(int t[ ], int n)
  recebe um vetor de inteiros (sem indicar qual
  a sua dimensão)(onde ele começa) e um inteiro que indica qual
  o número de elementos a iniciar (numero de posições).



*/


// função imprimeV()
void imprimeV(int *t, int n){
    int i;
    for(i=1; i<n; i++){

        printf(" [%d] ", t[i]); // imprime o vetor chamado de t nomeado na função
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
