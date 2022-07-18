#include <stdio.h>
#include <stdlib.h>


/**--------------------------ALOCA��O DIN�MICA-------------------------------**/
/*    Considere o seguinte:

        - arrays s�o agrupamentos sequenciais de dados de um mesmo tipo na mem�ria
        -um ponteiro guarda o endere�o de um dado na mem�ria
        -o nome do aray � um ponteiro para o primeiro elemento do array


    A linguagem C permite alocar (reservar) dinamicamente (em tempo de execu��o) blocos
    de mem�rias utilizando ponteiros. A esse processo da-se o nome de aloca��o din�mica.

    - Teremos a partir de agora um ponteiro que vai poder apontar pra determinas posi��es de
    mem�ria e ser consideradas como um array no programa. Este processo � o inverso do que foi
    trabalhado anteriormente.

    - Linguagem C por padr�o possuem 4 fun��es dipon�veis em stdlib.h:

                            - malloc
                            - calloc
                            - realloc
                            - free
    - Existe tamb�m o operador:
                            - sizeof
*/


/**--------------------------FUN��O MALLOC---------------------------**/
/*  - Serve para alocar mem�ria durante a execu��o do programa.

    -Ela faz o pedido de mem�ria ao computador e retorna um ponteiro com
    o endere�o do in�cio do espa�o de mem�ria alocado.


                        void *malloc (unsigned int num);

    A fun��o malloc() recebe um par�metro de entrada num: o tamanho do espa�o
    de mem�ria a ser alocado.

    Retorna NULL: no caso de erro;
    Retorna um ponteiro para a primeira posi��o do array;

    -Note que a fun��o malloc() retorna um ponteiro gen�rico (void*).
    Esse ponteiro pode ser atribu�do a qualquer tipo de ponteiro via type cast.
*/


 //Exemplo 01
 int main(){

    //Cria array de 50 inteiros (200 bytes)
    int *v = malloc(200);

    //Cria array de 200 char (200 bytes)
    char *c = malloc(200);













 }

