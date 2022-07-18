#include <stdio.h>
#include <stdlib.h>

/*
 A linguagem C nos permite criar nossos próprios tipos
 de variáveis. Além da struct e da union, podemos
 criar uma enum, também chamada de enumeração.

 Sintaxe:

    enum nome_enum {lista de identificadores};


*/

enum semana {Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado}; // Lista de constantes


int main()
{
    enum semana s; // Declaração de uma variável enum s

    s= Segunda;
    printf("Valor = %d\n", s); // vai retornar o identidficador 1 da lista de constantes que começa em zero 0





    system("pause");
    return 0;
}
