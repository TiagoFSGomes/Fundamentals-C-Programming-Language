#include <stdio.h>
#include <stdlib.h>

/*--------------------------PONTEIROS "*"---------------------------

- Tipo especial de vari�vel que armazenam/guardam/acessam/modificam endere�os de mem�ria

--------------- COMO DECLARAR PONTEIROS "*"-------------------------

            tipo_ponteiro *nome_ponteiro;

            int *x;
--------------- COMO INICIALIZAR PONTEIROS "*"----------------------

     int *p; // apontam para um endere�o de mem�ria

     int *p = NULL; // n�o apotam para nenhum lugar, sem endere�o v�lido

     int x = 10; // vari�vel
     int *p; // ponteiro
     p = &x; //p aponta para a vari�vel x. p recebe o valor de onde x esta na mem�ria

----------------COMO ACESSAR O CONTE�DO PONTEIROS-----------------------------------
    *p = acessa o conte�do de onde est� apontando o ponteiro

--------------- COMO MODIFICAR O DA POSI��O DE MEM�RIA APONTADA----------------------
    *p = 12 pega o endere�o pra onde o p aponta, acessa o valor e o modifica

    ou seja modifica o valor de outra vari�vel de forma indireta

--------------------------OPERA��ES  + ou - -------------------------------------------
- Ponteiros s� podem receber o endere�o de uma vari�vel do mesmo tipo do ponteiro

- Somente opera��es de SOMA e SUBTRA��O s�o permitidas a um �NICO ponteiro.
- Opera��es somente com n�meros INTEIROS

- Opera��es nada mais � do que somar o tamnho do TIPO do ponteiro.

- Navegar para "tr�s" ou para "frente" pelos endere�os de mem�ria com as opera��es de + e -

*/

int main()
{
    // LEMBRE-SE = UM TIPO INT OCUPA 4 BYTES DE MEM�RIA
    // LEMBRE-SE = UM TIPO CHAR OCUPA 1 BYTES DE MEM�RIA

    int *p = 0x5DC; //1500. O PONTEIRO P APONTA PARA POSI��O DE MEM�RIA DE N�MERO 1500

    char *c = 0x5DC; //1500. O PONTEIRO P APONTA PARA POSI��O DE MEM�RIA DE N�MERO 1500

    printf("p = %d \nc = %d\n", p,c);

    p++; // 1504 INCREMENTO DE MAIS 1 OU SEJA MAIS 4 BYTES = PONTEIRO TIPO INT
    c++; // 1501 INCREMENTO DE MAIS 1 OU SEJA MAIS 1 BYTE = PONTEIRO TIPO CHAR

    printf("p = %d \nc = %d\n", p,c);

    system("pause");
    return 0;
}
