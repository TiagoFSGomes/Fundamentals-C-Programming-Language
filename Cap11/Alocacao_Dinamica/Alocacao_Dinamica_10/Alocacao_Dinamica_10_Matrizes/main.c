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


/**--------------------------REALOCA��O ARRAYS MULTIDIMENSIONAIS---------------------------**/

/*
    Para alocar arrays com mais de uma dimens�o precisamos utilizar o conceito
    de ponteiro para  ponteiro

*/

int main(){

    // ponteiro (01 n�vel): cria o vetor

    int *p = (int*) malloc(5*sizeof(int));

    /*Ponteiro para ponteiro (2 n�veis) permite criar uma matriz*/
    int **m;

    /*Ponteiro para ponteiro para ponteiro (3 n�veis): permite criar um array de
        de 3 dimens�es.
    */
    int ***d;

    system("pause");
    return 0;


}
