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

*/

int main()
{
    void *pp; //ponteiro genérico

    int *p1, p2 = 10;

    p1 = &p2;
    pp = &p2; // Endereço de int

    printf("Endereço de pp: %p \n",pp);

    pp =&p1; // Endereço de int*

    printf("Endereço de pp: %p \n",pp);

    pp = p1;
    printf("Endereço de pp: %p \n",pp);




    system("pause");
    return 0;
}
