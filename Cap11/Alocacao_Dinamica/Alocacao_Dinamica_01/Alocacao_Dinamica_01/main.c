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


/**--------------------------OPERADOR SIZEOF---------------------------**/
/*  - Alocar mem�ria do tipo int � diferente de alocar mem�ria do tipo char.
    - Tipos diferentes podem ter tamanhos diferentes na mem�ria

                            char:   1 byte
                            int:    4 bytes
                            float:  4 bytes
                            double: 8 bytes

    - O operador sizeof() retorna o n�mero de bytes necess�rios para
        alocar um �nico elemento de um determinado tipo de dado:

    - Sintaxe:
                        sizeof nome_da_vari�vel
                        sizeof (nome_do_tipo)
*/

// Definindo Estrutura
struct ponto
{
    int x,y;
};
int main()
{
    printf("Tamanho char: %d\n",sizeof(char));
    printf("Tamanho int: %d\n",sizeof(int));
    printf("Tamanho float: %d\n",sizeof(float));
    printf("Tamanho double: %d\n",sizeof(double));
    printf("Tamanho struct ponto: %d\n",sizeof(struct ponto)); // int x e y = 8 bytes

    int x;
    double y;

    printf("Tamanho da variavel x: %d\n",sizeof x);
    printf("Tamanho da variavel y: %d\n",sizeof y);

    system("pause");
    return 0;
}
