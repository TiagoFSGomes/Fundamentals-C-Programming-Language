#include <stdio.h>
#include <stdlib.h>
/*Retorno da Fun��o ; Fun��es COM retorno

O comando return � utilizado para retornar um valor para o programa.

No entanto, esse comando tamb�m � usado para TERMINAR A EXECU��O DA FUN��O, similar ao
comando break em um la�o ou switch.
*/

// Fun��o vai terminar quando um dos comandos return for executado.

int maior(int x, int y){
    if(x>y){
        return x;
    }else
        return y;

    printf("Fim da fun��o\n"); //Jamais ser� executado, pois existe um comando return anteriormente
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
