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

--------------- COMO ACESSAR O CONTEÚDO PONTEIROS-----------------------------------
    *p = acessa o conteúdo de onde está apontando o ponteiro

--------------- COMO MODIFICAR O DA POSIÇÃO DE MEMÓRIA APONTADA----------------------
    *p = 12 pega o endereço pra onde o p aponta, acessa o valor e o modifica

    ou seja modifica o valor de outra variável de forma indireta

--------------- COMO MODIFICAR O DA POSIÇÃO DE MEMÓRIA APONTADA----------------------

*/

int main()
{
    int x = 10;
    int *p;

    p = &x; //p aponta para a variável x. p recebe o valor de onde x esta na memória

    *p = 12; // modifica o conteúdo para o p aponta

    printf("x = %d\n", x);
    printf("&x = %d\n", &x); // imprime o endereço de x
    printf("p = %d\n", p); // imprime p com o mesmo  endereço de x

    printf("p = %d\n", *p); // imprime o conteúdo do ponteiro


    system("pause");
    return 0;
}
