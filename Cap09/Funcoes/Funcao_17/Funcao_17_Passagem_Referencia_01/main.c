#include <stdio.h>
#include <stdlib.h>

/*
------------->TIPOS DE PASSAGEM DE PARÂMETROS<-------------

Para passar a informação de um trecho de código para dentro
da função. Mas existem dois tipos de passagem de parâmetro:
passagem POR VALOR e POR REFERÊNCIA.

----------------------->POR REFERÊNCIA<-----------------------
- Quando se quer que o valor da variável mude dentro da função
e essa mudança se reflita fora da função, usam-se passagens
de parâmetros por referência.

- Na passagem de parâmetros por referência não se passam para a
função os valores das variáveis, mas os endereços das variáveis
na memória.

- Para passar um parâmetro por referência, usa-se o operador “*”
(ponteiro) na frente do nome do parâmetro durante a declaração
da função.

- Para realizar a passagem por referência ponteiros devem ser
utilizados. A estratégia a ser adotada é:

(1)Passar o endereço de uma variável, obtido
através do operador “&” e armazenado em uma variável
do tipo ponteiro.

(2) Dentro da função, usar ponteiros para alterar
os locais para onde eles apontam e que correspondem
aos valores das variáveis originais.

- Quando chamamos a função scanf(), é necessário colocar o
operador “&” na frente do nome da variável que será lida do
teclado. O mesmo vale para outras funções que usam
passagem de parâmetro por referência.

*/
 //EXEMPLO 1
/*
O parâmetro n é um ponteiro.
Dentro da função que guarda o endereço de onde o valor de x
está guardado fora da função. Sempre que alteramos o valor de *n
(conteúdo da posição de memória guardada, ou seja, x),
o valor de x fora da função também é modificado.
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

