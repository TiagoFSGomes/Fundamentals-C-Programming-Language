#include <stdio.h>
#include <stdlib.h>

/* -  Uma uni�o pode ser vista como uma lista de vari�veis
    - A ideia b�sica por tr�s da uni�o � similar � da estrutura: criar apenas um tipo de dado
        com v�rias vari�veis.


    Sintaxe:

            union nome_union{
                tipo1 campo1;
                tipo2 campo2;
                ...
                tipon campoN;
            };



   - At� aqui, uma uni�o se parece muito com uma estrutura. Contudo todos os lementos contidos na uni�o
    ocupam o mesmo espa�o f�sico na mem�ria.

    -  Uma estrutura reserva espa�o de mem�ria para todos os seus elementos, enquanto uma union reserva
    espa�o de mem�ria para o seu maior elemento e compartilha essa mem�ria com os demais.

    - Numa struct � alocado espa�o suficiente para armazenar todos os seus elementos, enquanto
      numa union � alocado espa�o para armazenar o maior dos elementos que a comp�em.



    Exemplo:

    Tome como exemplo a seguinte declara��o de uni�o:
            union tipo{
                short int x;
                unsigned char c;
            };

    Essa uni�o possui o nome tipo e duas vari�veis: x, do tipo short int (dois bytes), e
    c, do tipo unsigned char (um byte). Assim, uma vari�vel declarada desse tipo
    union tipo t, ocupar� dois bytes na mem�ria, que � o tamanho do maior dos elementos da uni�o
(   short int).

    ATEN��O: Em uma uni�o, apenas um membro pode ser armazenado de cada vez.
            Isso acontece porque o espa�o de mem�ria � compartilhado.


*/



/*Nesse exemplo, a vari�vel x � do tipo short int e ocupa 16 bits (dois bytes)
de mem�ria. J� a vari�vel c � do tipo unsigned char e ocupa os oito primeiros bits
(um byte) de x.
Quando atribu�mos o valor 1545 � vari�vel x, a vari�vel c recebe a por��o de x
equivalente ao n�mero 9
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
 /*Do mesmo modo, se modificarmos o valor da vari�vel c para 69,
 estaremos automaticamente modificando o valor da vari�vel x para 1605:*/
    t.c = 69;
    printf("x = %d\n",t.x);
    printf("c = %d\n",t.c);


    system("pause");
    return 0;
}
