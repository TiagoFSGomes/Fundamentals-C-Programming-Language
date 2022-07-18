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


/**--------------------------FUNÇÃO REALLOC---------------------------**/

/*
 - Serve para alocar ou realocar memória durante a execução do programa

 - Ela faz o pedido de memória ao computador e retorna um ponteiro com o
    endereço do início do espaço de memória alocado.

            void *realloc (void *ptr, unsigned int num);


 - A função realloc() recebe dois parâmetros de entrada:

    1- Um ponteiro para um bloco de memória previamente alocado.
    2- num: o tamanho em bytes do espaço de memória a ser alocado.

    E retorna:

    1- NULL: no caso de erro.
    2- O ponteiro para a primeira posição do array alocado/realocado.



*/

//EXEMPLO 07

/*
        CUIDADO: Se não houver memória suficiente para alocar a memória
        requisitada a função realloc() retorna NULL.

*/


int main(){

    int *p = (int*) malloc(5*sizeof(int));

    int *p1 = (int*) realloc(p, 15*sizeof(int))// realocação de memória para 60 bytes - 15 posições
     // Usando p1 eviat-se perdeer as informações de p em  caso de rerro na realocação.

    if(p1 != NULL){ // Confirmação se deu certo a realocação

        p = p1; // P passa a valer P1. A partir daqui volto a trabalhar com p

    }


    // Não é interessante realocar p no próprio p:


    int *p;

    p = (int *) malloc(5 * sizeof(int)); // 5 posições * 4 bytes = 20 bytes

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
