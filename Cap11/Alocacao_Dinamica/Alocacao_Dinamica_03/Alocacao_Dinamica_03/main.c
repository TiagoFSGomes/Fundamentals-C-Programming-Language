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


/**--------------------------FUNÇÃO MALLOC---------------------------**/
/*  - Serve para alocar memória durante a execução do programa.

    -Ela faz o pedido de memória ao computador e retorna um ponteiro com
    o endereço do início do espaço de memória alocado.


                        void *malloc (unsigned int num);

    A função malloc() recebe um parâmetro de entrada num: o tamanho do espaço
    de memória a ser alocado.

    Retorna NULL: no caso de erro;
    Retorna um ponteiro para a primeira posição do array;

    -Note que a função malloc() retorna um ponteiro genérico (void*).
    Esse ponteiro pode ser atribuído a qualquer tipo de ponteiro via type cast.
*/


 //Exemplo 01
 int main(){

    //Cria array de 50 inteiros (200 bytes)
    int *v = (int*) malloc(200); // type cast pois malloc retorna um ponteiro genérico

    //Cria array de 50 char (50 bytes)
    char *c = (char*) malloc(50);


    /* Para reduzir a dependência de sempre ter que colocar
    o numero exato para criação dos arrays,
    deve-se usar a função sizeof()
    */

    int *v = (int*) malloc(50 * sizeof(int)); // 50 vezes o tamanho do inteiro

    char *c = (char*) malloc (50 * sizeof(char));// 50 vezes o tamanho do char


    system("pause");
    return 0;
 }

