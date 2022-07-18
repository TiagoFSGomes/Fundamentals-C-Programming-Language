#include <stdio.h>
#include <stdlib.h>

/*
 A linguagem C nos permite criar nossos próprios tipos
 de variáveis. Além da struct e da union, podemos
 criar uma enum, também chamada de enumeração.

 Sintaxe:

    enum nome_enum {lista de identificadores};


*/
// Lista de constantes com identificadores alterados e NÃO iniciando em 0
enum semana {Domingo = 1, Segunda, Terca, Quarta=7, Quinta, Sexta, Sabado};


int main()
{


    printf("Domingo = %d\n", Domingo); //1
    printf("Segunda = %d\n", Segunda); //2
    printf("Terca = %d\n", Terca); //3
    printf("Quarta = %d\n", Quarta); //7
    printf("Quinta = %d\n", Quinta); //8
    printf("Sexta = %d\n", Sexta); //9
    printf("Sabado = %d\n", Sabado);//10


    system("pause");
    return 0;
}
