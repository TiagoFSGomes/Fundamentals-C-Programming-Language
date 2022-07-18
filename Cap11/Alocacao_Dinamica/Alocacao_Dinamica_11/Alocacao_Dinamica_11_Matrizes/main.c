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


    int **p; // 2 dimens�es

    int i,j, N=2; // N � o n�mero de elementos alocados

    //Criar um array de ponteiros (int*)

    // int* -> permite criar um array de int
    // int** -> permite criar um array de int*

    p = (int **) malloc(N * sizeof(int*)); //  Vetro criado. �ndice i de uma matriz - Linhas da matriz

    for(i=0; i<N; i++){

        //Criar um array de int

        p[i] = (int *) malloc(N * sizeof(int)); // aten��o nos asteriscos/ gerar um vetor de N posi��es
                                                // �ndice j de uma matriz - Colunas da matriz


        for(j=0; j<N; j++)

            //l� a matriz de inteiros
            scanf("%d", &p[i][j]);
    }

    /*Em um array com mais de um dimens�o, a mem�ria
    � liberada na ORDEM INVERSA da Aloca��o

    Se foi alocado por ultimo as colunas, libera��o de mem�ria deve come�ar pelas colunas.


    */

    for(i=0; i<N; i++){
        free(p[i]);
    }
    free(p); // por ultimo libera as linhas que foram criadas inicalmente

    system("pause");
    return 0;


}
