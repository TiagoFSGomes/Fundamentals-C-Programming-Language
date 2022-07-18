#include <stdio.h>
#include <stdlib.h>

/*
 A linguagem C nos permite criar nossos próprios tipos
 de variáveis. Além da struct e da union, podemos
 criar uma enum, também chamada de enumeração.

 Sintaxe:

    enum nome_enum {lista de identificadores};


*/
// Definindo uma enumeração
enum escapes{retrocesso = '\b', tabulacao = '\t', novalinha = '\n'};


int main()
{
    // pode-se atribuir valores da tabela ASCII para enumeração: Veja abaixo:

    enum escapes e; // variavel "e"

    e = novalinha;

    printf("Teste %c de %c escrita\n", e,e);

    e = tabulacao; // tabulacao horizontal de acordo com a tebela ASCII

    printf("Teste %c de %c escrita\n", e,e);


    system("pause");
    return 0;
}
