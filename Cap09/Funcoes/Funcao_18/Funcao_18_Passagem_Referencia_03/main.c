#include <stdio.h>
#include <stdlib.h>

/*
------------->TIPOS DE PASSAGEM DE PAR�METROS<-------------

Para passar a informa��o de um trecho de c�digo para dentro
da fun��o. Mas existem dois tipos de passagem de par�metro:
passagem POR VALOR e POR REFER�NCIA.

----------------------->POR REFER�NCIA<-----------------------
- Quando se quer que o valor da vari�vel mude dentro da fun��o
e essa mudan�a se reflita fora da fun��o, usam-se passagens
de par�metros por refer�ncia.

- Na passagem de par�metros por refer�ncia n�o se passam para a
fun��o os valores das vari�veis, mas os endere�os das vari�veis
na mem�ria.

- Para passar um par�metro por refer�ncia, usa-se o operador �*�
(ponteiro) na frente do nome do par�metro durante a declara��o
da fun��o.

- Para realizar a passagem por refer�ncia ponteiros devem ser
utilizados. A estrat�gia a ser adotada �:

(1)Passar o endere�o de uma vari�vel, obtido
atrav�s do operador �&� e armazenado em uma vari�vel
do tipo ponteiro.

(2) Dentro da fun��o, usar ponteiros para alterar
os locais para onde eles apontam e que correspondem
aos valores das vari�veis originais.

- Quando chamamos a fun��o scanf(), � necess�rio colocar o
operador �&� na frente do nome da vari�vel que ser� lida do
teclado. O mesmo vale para outras fun��es que usam
passagem de par�metro por refer�ncia.

*/
 //EXEMPLO 2
void troca(int *a, int *b); // prot�tipo da fun��o troca()
int main()
{

 int a, b;
 puts("Dois numeros inteiros: ");
 scanf("%d %d", &a, &b);

 printf("Antes de troca \n");
 printf("a= %d e b=%d \n",a,b);

 troca(&a,&b);
 printf("Depois de troca \n");

  printf("a= %d e b=%d \n",a,b);
}
void troca(int *a, int *b)
{
 int tmp;
 tmp = *a;
 *a = *b;
 *b = tmp;
}
