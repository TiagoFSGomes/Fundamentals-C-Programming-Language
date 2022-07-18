#include <stdio.h>
#include <stdlib.h>

/*
 A linguagem C nos permite criar nossos pr�prios tipos
 de vari�veis. Al�m da struct e da union, podemos
 criar uma enum, tamb�m chamada de enumera��o.

 Sintaxe:

    enum nome_enum {lista de identificadores};


*/
// Definindo uma enumera��o
enum escapes{retrocesso = '\b', tabulacao = '\t', novalinha = '\n'};


int main()
{
    // pode-se atribuir valores da tabela ASCII para enumera��o: Veja abaixo:

    enum escapes e; // variavel "e"

    e = novalinha;

    printf("Teste %c de %c escrita\n", e,e);

    e = tabulacao; // tabulacao horizontal de acordo com a tebela ASCII

    printf("Teste %c de %c escrita\n", e,e);


    system("pause");
    return 0;
}
