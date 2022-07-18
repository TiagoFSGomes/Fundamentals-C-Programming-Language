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

*/

int main()
{
    int *p, *p1, x, y;

    p=&x; // p aponta para x

    p1=&y; // p aponta para y

    if(p==p1){ // os ponteiros apontam para o mesmo lugar? Neste exemplo não!
        printf("Ponteiros iguais\n");
    }else
         printf("Ponteiros diferentes\n");


    if(p>p1){ // Comparar a posição dos ponteiros. Quem esta na frente de quem? x esta na frente de y

        printf("p>p1\n");
    }else
        printf("p<=p1\n");


    system("pause");
    return 0;
}
