#include <stdio.h>
#include <stdlib.h>

/*--------------------------PONTEIROS "*"---------------------------

- Tipo especial de vari�vel que armazenam/guardam endere�os de mem�ria

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

--------------------------OPERA��ES-------------------------------------------------
- Ponteiros s� podem receber o endere�o de uma vari�vel do mesmo tipo do ponteiro


*/

int main()
{
    int *p, *p1, x = 10;

    float y = 20.0;


    p = &x; //p aponta para a vari�vel x. p recebe o valor de onde x esta na mem�ria

    printf("p = %d\n", *p); // imprime o conte�do do ponteiro

    p1 = p; //Correto os dois ponteiros s�o do  tipo int

    printf("p1 = %d\n", *p1); // imprime o conte�do do ponteiro p1


    // p = %y; // ERRADO ponteiro para inteiro



    system("pause");
    return 0;
}
