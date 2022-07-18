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


/**--------------------------FUN��O REALLOC---------------------------**/

/*
 - Serve para alocar ou realocar mem�ria durante a execu��o do programa

 - Ela faz o pedido de mem�ria ao computador e retorna um ponteiro com o
    endere�o do in�cio do espa�o de mem�ria alocado.

            void *realloc (void *ptr, unsigned int num);


 - A fun��o realloc() recebe dois par�metros de entrada:

    1- Um ponteiro para um bloco de mem�ria previamente alocado.
    2- num: o tamanho em bytes do espa�o de mem�ria a ser alocado.

    E retorna:

    1- NULL: no caso de erro.
    2- O ponteiro para a primeira posi��o do array alocado/realocado.



*/

//EXEMPLO 07

/*
        CUIDADO: Se n�o houver mem�ria suficiente para alocar a mem�ria
        requisitada a fun��o realloc() retorna NULL.

*/


int main(){

    int *p = (int*) malloc(5*sizeof(int));

    int *p1 = (int*) realloc(p, 15*sizeof(int))// realoca��o de mem�ria para 60 bytes - 15 posi��es
     // Usando p1 eviat-se perdeer as informa��es de p em  caso de rerro na realoca��o.

    if(p1 != NULL){ // Confirma��o se deu certo a realoca��o

        p = p1; // P passa a valer P1. A partir daqui volto a trabalhar com p

    }


    // N�o � interessante realocar p no pr�prio p:


    int *p;

    p = (int *) malloc(5 * sizeof(int)); // 5 posi��es * 4 bytes = 20 bytes

    p =(int*) realloc(p,15*sizeof(int)); // pode haver perda de dados em caso de p nulo.


    if(p == NULL){
        printf("Erro: Memoria Insuficiente!\n");
        system("pause");
        exit(1); // termina o programa
    }


    free(1) //  p = (int*) realloc(p,0);


    system("pause");
    return 0;


}
