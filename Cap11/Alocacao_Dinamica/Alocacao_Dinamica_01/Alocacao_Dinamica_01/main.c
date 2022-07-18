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


/**--------------------------OPERADOR SIZEOF---------------------------**/
/*  - Alocar memória do tipo int é diferente de alocar memória do tipo char.
    - Tipos diferentes podem ter tamanhos diferentes na memória

                            char:   1 byte
                            int:    4 bytes
                            float:  4 bytes
                            double: 8 bytes

    - O operador sizeof() retorna o número de bytes necessários para
        alocar um único elemento de um determinado tipo de dado:

    - Sintaxe:
                        sizeof nome_da_variável
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
