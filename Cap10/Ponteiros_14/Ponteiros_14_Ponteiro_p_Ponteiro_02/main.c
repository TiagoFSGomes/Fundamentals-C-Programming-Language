#include <stdio.h>
#include <stdlib.h>

/*--------------------------PONTEIROS "*"---------------------------

- Tipo especial de vari�vel que armazenam/guardam/acessam/modificam endere�os de mem�ria

--------------- COMO DECLARAR PONTEIROS "*"-------------------------

            tipo_ponteiro *nome_ponteiro;

            int *x;
--------------- COMO INICIALIZAR PONTEIROS "*"----------------------

     int *p; // apontam para um endere�o de mem�ria

     int *p = NULL; // n�o apotam para nenhum lugar, sem endere�o v�lido

     int x = 10; // vari�vel
     int *p; // ponteiro
     p = &x; //p aponta para a vari�vel x. p recebe o valor de onde x esta na mem�ria

----------------COMO ACESSAR O CONTE�DO PONTEIROS-----------------------------------
    *p = acessa o conte�do de onde est� apontando o ponteiro

--------------- COMO MODIFICAR O DA POSI��O DE MEM�RIA APONTADA----------------------
    *p = 12 pega o endere�o pra onde o p aponta, acessa o valor e o modifica

    ou seja modifica o valor de outra vari�vel de forma indireta

--------------------------OPERA��ES  + ou - -------------------------------------------
- Ponteiros s� podem receber o endere�o de uma vari�vel do mesmo tipo do ponteiro

- Somente opera��es de SOMA e SUBTRA��O s�o permitidas a um �NICO ponteiro.
- Opera��es somente com n�meros INTEIROS

- Opera��es nada mais � do que somar o tamnho do TIPO do ponteiro.

- Navegar para "tr�s" ou para "frente" pelos endere�os de mem�ria com as opera��es de + e -

--------------------------COMPARA��ES DE PONTEIROS-------------------------------------------

- Em outras palavras. COMPARA��O de ENDERE�OS

-Ponteiros podem ser comparados utilizando:

    ==, !=, <, >, <=,>=
------------------------------PONTEIRO GEN�RICO---------------------------------------------
- Pode apontar para todos os tipos de dados existentes ou que ainda ser�o criados

- Forma Geral:
                    void *nome_ponteiro;

                    Exemplo: void *v;
------------------------------ AESSO AO CONTE�DO PONTEIRO GEN�RICO-------------------------

- Antes de acessar o conte�do � preciso converter o ponteiro gen�rico para
o tipo de ponteiro com o qual se deseja trabalhar

--------------------------------OPERA��ES COM PONTEIRO GEN�RICO----------------------------

- As opera��es aritm�ticas s�o sempre realizadas com base em uma unidade de mem�ria (1 byte)


-----------------------------------------PONTEIROS E ARRAYS--------------------------------
- o nome do array � apenas um ponteiro que aponta
para o primeiro elemento do array

-------------------------PONTEIROS E ARRAYS MULTIDIMENSIONAIS------------------------------

- Ponteiros permitem percorrer as v�rias dimens�es de um array multidimensional como
se existisse apenas uma dimens�o. As dimens�es mais � direita mudam mais r�pido.

-------------------------------------PONTEIRO P/ PONTEIRO----------------------------------

- A linguagem C permite criar ponteiros com diferentes n�veis de apontamento, isto �,
ponteiros que apontam para outros ponteiros.

- Sintaxe:
                                    tipo_do_ponteiro **nome_do_ponteiro;

- Usamos dois asteriscos (*) para informar ao compilador que aquela
vari�vel n�o vai guardar um valor, mas sim um endere�o de mem�ria para
outro endere�o de mem�ria para aquele tipo especificado.

- A linguagem C permite que se crie um ponteiro com um n�mero infinito de n�veis
de apontamento.
*/

//Exemplo 02:  acessando o conte�do de um ponteiro para ponteiro

int main()
{
    char letra ='a';

    char *ptrChar = &letra;

    char **ptrPtrChar = &ptrChar;

    char ***ptrPtr = &ptrPtrChar;

    printf("Endereco da variavel letra = %d\n", &letra); // imprime o endere�o

    printf("Conteudo em *ptrChar: %c\n",*ptrChar); //a
    printf("Endereco em *ptrChar: %p\n",ptrChar); //a

    printf("Conteudo em **ptrPtrChar %c\n",**ptrPtrChar);//a
    printf("Endere�o em **ptrPtrChar %p\n",ptrPtrChar);//a

    printf("Conteudo em ***ptrPtr: %c\n",***ptrPtr);//a
    printf("Conteudo em ***ptrPtr: %p\n",ptrPtr);//a


    system("pause");
    return 0;
}
