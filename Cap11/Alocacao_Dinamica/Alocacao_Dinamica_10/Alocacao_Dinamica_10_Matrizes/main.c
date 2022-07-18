#include <stdio.h>
#include <stdlib.h>


/**--------------------------ALOCAÇÃO DINÂMICA-------------------------------**/
/*    Considere o seguinte:

        - arrays são agrupamentos sequenciais de dados de um mesmo tipo na memória
        -um ponteiro guarda o endereço de um dado na memória
        -o nome do aray é um ponteiro para o primeiro elemento do array


    A linguagem C permite alocar (reservar) dinamicamente (em tempo de execução) blocos
    de memórias utilizando ponteiros. A esse processo da-se o nome de alocação dinâmica.

    - Teremos a partir de agora um ponteiro que vai poder apontar pra determinas posições de
    memória e ser consideradas como um array no programa. Este processo é o inverso do que foi
    trabalhado anteriormente.

    - Linguagem C por padrão possuem 4 funções diponíveis em stdlib.h:

                            - malloc
                            - calloc
                            - realloc
                            - free
    - Existe também o operador:
                            - sizeof
*/


/**--------------------------REALOCAÇÃO ARRAYS MULTIDIMENSIONAIS---------------------------**/

/*
    Para alocar arrays com mais de uma dimensão precisamos utilizar o conceito
    de ponteiro para  ponteiro

*/

int main(){

    // ponteiro (01 nível): cria o vetor

    int *p = (int*) malloc(5*sizeof(int));

    /*Ponteiro para ponteiro (2 níveis) permite criar uma matriz*/
    int **m;

    /*Ponteiro para ponteiro para ponteiro (3 níveis): permite criar um array de
        de 3 dimensões.
    */
    int ***d;

    system("pause");
    return 0;


}
