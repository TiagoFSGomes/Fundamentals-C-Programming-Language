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


/**--------------------------FUN��O CALLOC---------------------------**/
/*  - Serve para alocar mem�ria durante a execu��o do programa

    - Ela faz o pedido de mem�ria ao computador e retorna um ponteiro
    com o endere�o do in�cio do espa�o de mem�ria alocado

                     void *calloc (unsigned int num, unsigned int size);

            void *calloc (n�mero de elementos no array a ser alocado, qual � o tamanho de cada posi��o do meu vetor);


    - Funcionamento:

    - calloc() recebe por par�metro:

    1 - n�mero de elementos no array a ser alocado
    2 - o tamanho de cada elemento no array

    - calloc() retorna:

    1- NULL: no caso de erro
    2 - ponteiro para a primeira posi��o do array
*/


//EXEMPLO 03

int main(){

    //Cria ponteiro de 50 inteiros (4 bytes cada)
    int *v  = (int*) calloc(50,4);

   // Cria array de 200 (1 byte cada)
   char *c  = (char*) calloc(200,1);

   // Abaixo � apresentada outra op��o para evitar decorar a tamanho de cada tipo

    int *v  = (int*) calloc(50,sizeof(int));

    char *c  = (char*) calloc(200,sizeof(char));



    system("pause");
    return 0;

}








