#include <stdio.h>
#include <stdlib.h>


/*
 - Um dos usos mais comuns de uma uni�o � unir um tipo b�sico
 a um array de tipos menores.

                union tipo{
                    short int x;
                    unsigned char c[2];
                    };

- Sabemos que a vari�vel x ocupa dois bytes na mem�ria.
  Como cada posi��o da vari�vel c ocupa apenas um byte,
  podemos acessar facilmente cada uma das partes da vari�vel x
  sem precisar recorrer a opera��es de manipula��o de bits
  (opera��es l�gicas e de deslocamento de bits).


  Objetivo: Economizar mem�ria em situa��es que vari�veis n�o s�o utilizadas ao mesmo tempo.
            Seus campos nunca s�o usados ao mesmo tempo. N�o fazendo sentido reservar
            espa�o para os dois.

*/

union tipo{

    short int x; // ocupa 2 bytes
    unsigned char c[2]; // ocupa 1 byte cada posi��o

};


int main()
{
    union tipo v; // declara��o de union

    v.x = 1545; // atribui��o de valor a x. Neste ponto somente a vari�vel x ser� usada, ou seja os 2 bytes
    printf("x = %d\n", v.x);

    v.c[0] = 'a'; //atribui��o a c[0]. Neste ponto somente a vari�vel c[0] ser� usada, ou seja 1 byte ocupado
    v.c[1] = 'b'; // atribui��o a c[1]. Neste ponto somente a vari�vel c[1] ser� usada, ou seja 1 byte ocupado

    printf("c[0] = %c\n", v.c[0]);
    printf("c[1] = %c\n", v.c[1]);


    system("pause");
    return 0;
}
