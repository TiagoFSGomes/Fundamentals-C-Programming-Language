#include <stdio.h>
#include <stdlib.h>
/*Retorno da Fun��o ; Fun��es COM retorno

    Se a fun��o n�o for do tipo void, ela dever� retornar um valor. O comando return
 � utilizado para retornar esse valor para o programa:


                    return express�o;




   Aten��o:  cl�usula return tem de ser compat�vel com o tipo de retorno declarado
para a fun��o.


 ATEN��O: Uma fun��o pode ter mais de uma declara��o return

          No maioria dos casos, pode-se reescrever uma fun��o
        para que ela use somente um comando return. MELHORA LEITURA C�DIGO EM GRANDES FUN��ES

*/

// fun��o com apenas um return
int maior(int x, int y){
    int z;
    if(x>y){
        z = x;
    }else
        z = y;

    return z;
}

int main()
{

    int a,b;


    printf("Digite a: ");
    scanf("%d", &a);
    printf("Digite b: ");
    scanf("%d", &b);

    printf("maior numero e = %d\n",maior(a,b)); //chamada da fun��o foi feita dentro da fun��o printf().

    system("pause");
    return 0;
}
