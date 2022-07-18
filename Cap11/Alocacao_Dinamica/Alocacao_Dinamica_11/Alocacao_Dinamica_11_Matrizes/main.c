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


    int **p; // 2 dimensões

    int i,j, N=2; // N é o número de elementos alocados

    //Criar um array de ponteiros (int*)

    // int* -> permite criar um array de int
    // int** -> permite criar um array de int*

    p = (int **) malloc(N * sizeof(int*)); //  Vetro criado. índice i de uma matriz - Linhas da matriz

    for(i=0; i<N; i++){

        //Criar um array de int

        p[i] = (int *) malloc(N * sizeof(int)); // atenção nos asteriscos/ gerar um vetor de N posições
                                                // índice j de uma matriz - Colunas da matriz


        for(j=0; j<N; j++)

            //lê a matriz de inteiros
            scanf("%d", &p[i][j]);
    }

    /*Em um array com mais de um dimensão, a memória
    é liberada na ORDEM INVERSA da Alocação

    Se foi alocado por ultimo as colunas, liberação de memória deve começar pelas colunas.


    */

    for(i=0; i<N; i++){
        free(p[i]);
    }
    free(p); // por ultimo libera as linhas que foram criadas inicalmente

    system("pause");
    return 0;


}
