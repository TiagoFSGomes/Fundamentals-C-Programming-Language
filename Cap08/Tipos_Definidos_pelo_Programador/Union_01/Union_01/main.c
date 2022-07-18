#include <stdio.h>
#include <stdlib.h>

/* -  Uma união pode ser vista como uma lista de variáveis
    - A ideia básica por trás da união é similar à da estrutura: criar apenas um tipo de dado
        com várias variáveis.


    Sintaxe:

            union nome_union{
                tipo1 campo1;
                tipo2 campo2;
                ...
                tipon campoN;
            };



   - Até aqui, uma união se parece muito com uma estrutura. Contudo todos os lementos contidos na união
    ocupam o mesmo espaço físico na memória.

    -  Uma estrutura reserva espaço de memória para todos os seus elementos, enquanto uma union reserva
    espaço de memória para o seu maior elemento e compartilha essa memória com os demais.

    - Numa struct é alocado espaço suficiente para armazenar todos os seus elementos, enquanto
      numa union é alocado espaço para armazenar o maior dos elementos que a compõem.



    Exemplo:

    Tome como exemplo a seguinte declaração de união:
            union tipo{
                short int x;
                unsigned char c;
            };

    Essa união possui o nome tipo e duas variáveis: x, do tipo short int (dois bytes), e
    c, do tipo unsigned char (um byte). Assim, uma variável declarada desse tipo
    union tipo t, ocupará dois bytes na memória, que é o tamanho do maior dos elementos da união
(   short int).

    ATENÇÃO: Em uma união, apenas um membro pode ser armazenado de cada vez.
            Isso acontece porque o espaço de memória é compartilhado.


*/



/*Nesse exemplo, a variável x é do tipo short int e ocupa 16 bits (dois bytes)
de memória. Já a variável c é do tipo unsigned char e ocupa os oito primeiros bits
(um byte) de x.
Quando atribuímos o valor 1545 à variável x, a variável c recebe a porção de x
equivalente ao número 9
*/
union tipo
{
    short int x; //ocupa 16 bits (dois bytes)
    unsigned char c;//ocupa os oito primeiros bits (um byte)
};
int main()
{
    union tipo t;

    t.x = 1545;
    printf("x = %d\n",t.x);
    printf("c = %d\n",t.c);
 /*Do mesmo modo, se modificarmos o valor da variável c para 69,
 estaremos automaticamente modificando o valor da variável x para 1605:*/
    t.c = 69;
    printf("x = %d\n",t.x);
    printf("c = %d\n",t.c);


    system("pause");
    return 0;
}
