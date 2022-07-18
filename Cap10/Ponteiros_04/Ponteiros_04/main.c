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

*/

int main()
{
    // LEMBRE-SE = UM TIPO INT OCUPA 4 BYTES DE MEMÓRIA
    // LEMBRE-SE = UM TIPO CHAR OCUPA 1 BYTES DE MEMÓRIA

    int *p = 0x5DC; //1500. O PONTEIRO P APONTA PARA POSIÇÃO DE MEMÓRIA DE NÚMERO 1500

    char *c = 0x5DC; //1500. O PONTEIRO P APONTA PARA POSIÇÃO DE MEMÓRIA DE NÚMERO 1500

    printf("p = %d \nc = %d\n", p,c);

    p++; // 1504 INCREMENTO DE MAIS 1 OU SEJA MAIS 4 BYTES = PONTEIRO TIPO INT
    c++; // 1501 INCREMENTO DE MAIS 1 OU SEJA MAIS 1 BYTE = PONTEIRO TIPO CHAR

    printf("p = %d \nc = %d\n", p,c);

    system("pause");
    return 0;
}
