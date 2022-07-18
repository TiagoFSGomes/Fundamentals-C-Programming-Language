#include <stdio.h>
#include <stdlib.h>

/*
 A linguagem C nos permite criar nossos pr�prios tipos
 de vari�veis. Al�m da struct e da union, podemos
 criar uma enum, tamb�m chamada de enumera��o.

 Sintaxe:

    enum nome_enum {lista de identificadores};


*/

enum semana {Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado}; // Lista de constantes


int main()
{
    enum semana s; // Declara��o de uma vari�vel enum s

    s= Segunda;
    printf("Valor = %d\n", s); // vai retornar o identidficador 1 da lista de constantes que come�a em zero 0





    system("pause");
    return 0;
}
