#include <stdio.h>
#include <stdlib.h>

/*
 A linguagem C nos permite criar nossos pr�prios tipos
 de vari�veis. Al�m da struct e da union, podemos
 criar uma enum, tamb�m chamada de enumera��o.

 Sintaxe:

    enum nome_enum {lista de identificadores};


*/

enum semana {Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado}; // Lista de constantes com identificadores


int main()
{
    enum semana s1, s2, s3; // Declara��o de uma vari�vel enum s

    s1 = Segunda; //1
    s2 = Terca;//2
    s3 = s1 +s2;// 1+2 = 3

    printf("Domingo = %d\n", Domingo); // vai retornar o identidficador 0 da lista de constantes que come�a em zero 0

    printf("s1 = %d\n", s1);
    printf("s2 = %d\n", s2);
    printf("s3 = %d\n", s3);

    if(s3==Quarta){
        printf("s3 igual a Quarta\n\n");
    }


    system("pause");
    return 0;
}
