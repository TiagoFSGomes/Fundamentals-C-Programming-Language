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


/**--------------------------FUNÇÃO CALLOC---------------------------**/
/*  - Serve para alocar memória durante a execução do programa

    - Ela faz o pedido de memória ao computador e retorna um ponteiro
    com o endereço do início do espaço de memória alocado

                     void *calloc (unsigned int num, unsigned int size);

            void *calloc (número de elementos no array a ser alocado, qual é o tamanho de cada posição do meu vetor);


    - Funcionamento:

    - calloc() recebe por parâmetro:

    1 - número de elementos no array a ser alocado
    2 - o tamanho de cada elemento no array

    - calloc() retorna:

    1- NULL: no caso de erro
    2 - ponteiro para a primeira posição do array
*/


//EXEMPLO 03

int main(){

    //Cria ponteiro de 50 inteiros (4 bytes cada)
    int *v  = (int*) calloc(50,4);

   // Cria array de 200 (1 byte cada)
   char *c  = (char*) calloc(200,1);

   // Abaixo é apresentada outra opção para evitar decorar a tamanho de cada tipo

    int *v  = (int*) calloc(50,sizeof(int));

    char *c  = (char*) calloc(200,sizeof(char));



    system("pause");
    return 0;

}








