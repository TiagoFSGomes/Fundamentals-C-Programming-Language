#include <stdio.h>
#include <stdlib.h>
/*Retorno da Fun��o ; Fun��es COM retorno

    Se a fun��o n�o for do tipo void, ela dever� retornar um valor. O comando return
 � utilizado para retornar esse valor para o programa:


                    return express�o;




   Aten��o:  cl�usula return tem de ser compat�vel com o tipo de retorno declarado
para a fun��o.

*/

int soma(int x, int y){
    return x + y;
}

int main()
{

    int a,b;


    printf("Digite a: ");
    scanf("%d", &a);
    printf("Digite b: ");
    scanf("%d", &b);

    printf("Soma = %d\n",soma(a,b)); //chamada da fun��o foi feita dentro da fun��o printf().

    system("pause");
    return 0;
}
