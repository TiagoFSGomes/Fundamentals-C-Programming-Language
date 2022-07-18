#include <stdio.h>
#include <stdlib.h>

/*--------------------------PONTEIROS "*"---------------------------

- Tipo especial de variável que armazenam/guardam endereços de memória

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

--------------------------OPERAÇÕES-------------------------------------------------
- Ponteiros só podem receber o endereço de uma variável do mesmo tipo do ponteiro


*/

int main()
{
    int *p, *p1, x = 10;

    float y = 20.0;


    p = &x; //p aponta para a variável x. p recebe o valor de onde x esta na memória

    printf("p = %d\n", *p); // imprime o conteúdo do ponteiro

    p1 = p; //Correto os dois ponteiros são do  tipo int

    printf("p1 = %d\n", *p1); // imprime o conteúdo do ponteiro p1


    // p = %y; // ERRADO ponteiro para inteiro



    system("pause");
    return 0;
}
