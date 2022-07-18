#include <stdio.h>
#include <stdlib.h>


/*
 - Um dos usos mais comuns de uma união é unir um tipo básico
 a um array de tipos menores.

                union tipo{
                    short int x;
                    unsigned char c[2];
                    };

- Sabemos que a variável x ocupa dois bytes na memória.
  Como cada posição da variável c ocupa apenas um byte,
  podemos acessar facilmente cada uma das partes da variável x
  sem precisar recorrer a operações de manipulação de bits
  (operações lógicas e de deslocamento de bits).


  Objetivo: Economizar memória em situações que variáveis não são utilizadas ao mesmo tempo.
            Seus campos nunca são usados ao mesmo tempo. Não fazendo sentido reservar
            espaço para os dois.

*/

union tipo{

    short int x; // ocupa 2 bytes
    unsigned char c[2]; // ocupa 1 byte cada posição

};


int main()
{
    union tipo v; // declaração de union

    v.x = 1545; // atribuição de valor a x. Neste ponto somente a variável x será usada, ou seja os 2 bytes
    printf("x = %d\n", v.x);

    v.c[0] = 'a'; //atribuição a c[0]. Neste ponto somente a variável c[0] será usada, ou seja 1 byte ocupado
    v.c[1] = 'b'; // atribuição a c[1]. Neste ponto somente a variável c[1] será usada, ou seja 1 byte ocupado

    printf("c[0] = %c\n", v.c[0]);
    printf("c[1] = %c\n", v.c[1]);


    system("pause");
    return 0;
}
