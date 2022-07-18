#include <stdio.h>
#include <stdlib.h>

/*
------------->TIPOS DE PASSAGEM DE PARÂMETROS<-------------

Para passar a informação de um trecho de código para dentro
da função. Mas existem dois tipos de passagem de parâmetro:
passagem POR VALOR e POR REFERÊNCIA.

----------------------->POR REFERÊNCIA<-----------------------
- Quando se quer que o valor da variável mude dentro da função
e essa mudança se reflita fora da função, usam-se passagens
de parâmetros por referência.

- Na passagem de parâmetros por referência não se passam para a
função os valores das variáveis, mas os endereços das variáveis
na memória.

- Para passar um parâmetro por referência, usa-se o operador “*”
(ponteiro) na frente do nome do parâmetro durante a declaração
da função.

- Para realizar a passagem por referência ponteiros devem ser
utilizados. A estratégia a ser adotada é:

(1)Passar o endereço de uma variável, obtido
através do operador “&” e armazenado em uma variável
do tipo ponteiro.

(2) Dentro da função, usar ponteiros para alterar
os locais para onde eles apontam e que correspondem
aos valores das variáveis originais.

- Quando chamamos a função scanf(), é necessário colocar o
operador “&” na frente do nome da variável que será lida do
teclado. O mesmo vale para outras funções que usam
passagem de parâmetro por referência.

*/
 //EXEMPLO 2
void troca(int *a, int *b); // protótipo da função troca()
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
