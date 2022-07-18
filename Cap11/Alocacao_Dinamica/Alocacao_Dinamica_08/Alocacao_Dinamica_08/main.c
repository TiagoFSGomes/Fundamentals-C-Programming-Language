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

//EXEMPLO 06

int main()
{
    //Cria array de 50 inteitos (200 bytes)
    int *v = (int*) malloc(200);

    /*  Aumenta a mem�ria alocada para 100 inteiros (400 bytes)*/

    v = (int*) realloc(v,400)


    // outra forma de realizar o procedimento acima com sizeof()

    int *v = (int*) malloc(50 * sizeof(int));
    v = (int*) realloc(100 * sizeof(int));

    // ALOCAR mem�ria usando fun��o realloc()

    v = (int*) realloc(NULL, 50 * (sizeof(int));)
    v = (int*) malloc(50 * sizeof(int));

    /*
        Se o tamanho de mem�ria solicitado for igual a zero,
        realloc() ir� liberar a mem�ria da mesma forma como na fun��o
        free()
    */

    int *v = (int*) malloc(50 * sizeof(int));
    p = (int*) realloc(p,0); // Equivale ao comando free(p). Realocar P com zero bytes de mem�ria


    system("pause");
    return 0;

}
