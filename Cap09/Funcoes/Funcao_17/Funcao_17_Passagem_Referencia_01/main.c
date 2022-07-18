#include <stdio.h>
#include <stdlib.h>

/*
------------->TIPOS DE PASSAGEM DE PAR�METROS<-------------

Para passar a informa��o de um trecho de c�digo para dentro
da fun��o. Mas existem dois tipos de passagem de par�metro:
passagem POR VALOR e POR REFER�NCIA.

----------------------->POR REFER�NCIA<-----------------------
- Quando se quer que o valor da vari�vel mude dentro da fun��o
e essa mudan�a se reflita fora da fun��o, usam-se passagens
de par�metros por refer�ncia.

- Na passagem de par�metros por refer�ncia n�o se passam para a
fun��o os valores das vari�veis, mas os endere�os das vari�veis
na mem�ria.

- Para passar um par�metro por refer�ncia, usa-se o operador �*�
(ponteiro) na frente do nome do par�metro durante a declara��o
da fun��o.

- Para realizar a passagem por refer�ncia ponteiros devem ser
utilizados. A estrat�gia a ser adotada �:

(1)Passar o endere�o de uma vari�vel, obtido
atrav�s do operador �&� e armazenado em uma vari�vel
do tipo ponteiro.

(2) Dentro da fun��o, usar ponteiros para alterar
os locais para onde eles apontam e que correspondem
aos valores das vari�veis originais.

- Quando chamamos a fun��o scanf(), � necess�rio colocar o
operador �&� na frente do nome da vari�vel que ser� lida do
teclado. O mesmo vale para outras fun��es que usam
passagem de par�metro por refer�ncia.

*/
 //EXEMPLO 1
/*
O par�metro n � um ponteiro.
Dentro da fun��o que guarda o endere�o de onde o valor de x
est� guardado fora da fun��o. Sempre que alteramos o valor de *n
(conte�do da posi��o de mem�ria guardada, ou seja, x),
o valor de x fora da fun��o tamb�m � modificado.
*/
void soma_mais_um(int *n){
    *n = *n + 1;
    printf("Dentro da funcao: x = %d\n",*n); // x = 6
}


int main()
{
    int x = 5;
    printf("Antes da funcao: x = %d\n",x); // x = 5

    soma_mais_um(&x);  // x = 6
    printf("Depois da funcao: x = %d\n",x);// x = 6
    system("pause");
    return 0;
}

