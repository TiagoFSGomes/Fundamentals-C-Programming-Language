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

//EXEMPLO 06

int main()
{
    //Cria array de 50 inteitos (200 bytes)
    int *v = (int*) malloc(200);

    /*  Aumenta a memória alocada para 100 inteiros (400 bytes)*/

    v = (int*) realloc(v,400)


    // outra forma de realizar o procedimento acima com sizeof()

    int *v = (int*) malloc(50 * sizeof(int));
    v = (int*) realloc(100 * sizeof(int));

    // ALOCAR memória usando função realloc()

    v = (int*) realloc(NULL, 50 * (sizeof(int));)
    v = (int*) malloc(50 * sizeof(int));

    /*
        Se o tamanho de memória solicitado for igual a zero,
        realloc() irá liberar a memória da mesma forma como na função
        free()
    */

    int *v = (int*) malloc(50 * sizeof(int));
    p = (int*) realloc(p,0); // Equivale ao comando free(p). Realocar P com zero bytes de memória


    system("pause");
    return 0;

}
