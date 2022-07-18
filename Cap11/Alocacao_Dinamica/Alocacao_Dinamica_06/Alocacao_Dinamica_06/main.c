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


//EXEMPLO 04

int main()
{
    int *p;

    p = (int *) calloc(5, sizeof(int)); // 5 posições * 4 bytes = 20 bytes

    if(p == NULL){
        printf("Erro: Memoria Insuficiente!\n");
        system("pause");
        exit(1); // termina o programa
    }

    int i;
    for (i=0; i<5; i++){
        printf("Digite o valor da posicao %d: ",i);
        scanf("%d", &p[i]); // aqui trabalhe já com vetor e não um ponteiro
    }


    // Liberar a memória - Após pedir memória ao computador
    // pode-se liberar a mesma com este comando

    free(p);


    /*Libera a memória alocada na variável p.
    Não esta mais usando aquela região e que outro processo
    variável pode utilizar aquela região.
    */
    system("pause");
    return 0;
}
