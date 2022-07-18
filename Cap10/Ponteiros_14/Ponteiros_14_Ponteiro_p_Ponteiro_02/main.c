#include <stdio.h>
#include <stdlib.h>

/*--------------------------PONTEIROS "*"---------------------------

- Tipo especial de variável que armazenam/guardam/acessam/modificam endereços de memória

--------------- COMO DECLARAR PONTEIROS "*"-------------------------

            tipo_ponteiro *nome_ponteiro;

            int *x;
--------------- COMO INICIALIZAR PONTEIROS "*"----------------------

     int *p; // apontam para um endereço de memória

     int *p = NULL; // não apotam para nenhum lugar, sem endereço válido

     int x = 10; // variável
     int *p; // ponteiro
     p = &x; //p aponta para a variável x. p recebe o valor de onde x esta na memória

----------------COMO ACESSAR O CONTEÚDO PONTEIROS-----------------------------------
    *p = acessa o conteúdo de onde está apontando o ponteiro

--------------- COMO MODIFICAR O DA POSIÇÃO DE MEMÓRIA APONTADA----------------------
    *p = 12 pega o endereço pra onde o p aponta, acessa o valor e o modifica

    ou seja modifica o valor de outra variável de forma indireta

--------------------------OPERAÇÕES  + ou - -------------------------------------------
- Ponteiros só podem receber o endereço de uma variável do mesmo tipo do ponteiro

- Somente operações de SOMA e SUBTRAÇÃO são permitidas a um ÚNICO ponteiro.
- Operações somente com números INTEIROS

- Operações nada mais é do que somar o tamnho do TIPO do ponteiro.

- Navegar para "trás" ou para "frente" pelos endereços de memória com as operações de + e -

--------------------------COMPARAÇÕES DE PONTEIROS-------------------------------------------

- Em outras palavras. COMPARAÇÃO de ENDEREÇOS

-Ponteiros podem ser comparados utilizando:

    ==, !=, <, >, <=,>=
------------------------------PONTEIRO GENÉRICO---------------------------------------------
- Pode apontar para todos os tipos de dados existentes ou que ainda serão criados

- Forma Geral:
                    void *nome_ponteiro;

                    Exemplo: void *v;
------------------------------ AESSO AO CONTEÚDO PONTEIRO GENÉRICO-------------------------

- Antes de acessar o conteúdo é preciso converter o ponteiro genérico para
o tipo de ponteiro com o qual se deseja trabalhar

--------------------------------OPERAÇÕES COM PONTEIRO GENÉRICO----------------------------

- As operações aritméticas são sempre realizadas com base em uma unidade de memória (1 byte)


-----------------------------------------PONTEIROS E ARRAYS--------------------------------
- o nome do array é apenas um ponteiro que aponta
para o primeiro elemento do array

-------------------------PONTEIROS E ARRAYS MULTIDIMENSIONAIS------------------------------

- Ponteiros permitem percorrer as várias dimensões de um array multidimensional como
se existisse apenas uma dimensão. As dimensões mais à direita mudam mais rápido.

-------------------------------------PONTEIRO P/ PONTEIRO----------------------------------

- A linguagem C permite criar ponteiros com diferentes níveis de apontamento, isto é,
ponteiros que apontam para outros ponteiros.

- Sintaxe:
                                    tipo_do_ponteiro **nome_do_ponteiro;

- Usamos dois asteriscos (*) para informar ao compilador que aquela
variável não vai guardar um valor, mas sim um endereço de memória para
outro endereço de memória para aquele tipo especificado.

- A linguagem C permite que se crie um ponteiro com um número infinito de níveis
de apontamento.
*/

//Exemplo 02:  acessando o conteúdo de um ponteiro para ponteiro

int main()
{
    char letra ='a';

    char *ptrChar = &letra;

    char **ptrPtrChar = &ptrChar;

    char ***ptrPtr = &ptrPtrChar;

    printf("Endereco da variavel letra = %d\n", &letra); // imprime o endereço

    printf("Conteudo em *ptrChar: %c\n",*ptrChar); //a
    printf("Endereco em *ptrChar: %p\n",ptrChar); //a

    printf("Conteudo em **ptrPtrChar %c\n",**ptrPtrChar);//a
    printf("Endereço em **ptrPtrChar %p\n",ptrPtrChar);//a

    printf("Conteudo em ***ptrPtr: %c\n",***ptrPtr);//a
    printf("Conteudo em ***ptrPtr: %p\n",ptrPtr);//a


    system("pause");
    return 0;
}
