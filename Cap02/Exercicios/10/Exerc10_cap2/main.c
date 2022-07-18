#include <stdio.h>
#include <stdlib.h>


/* Programa solicita ao usuário entrar com valor do dia, mês e ano (inteiros)
   Em seguida imprima os valores lidos separados por uma barra (\)

*/

int main(){

    int dia, mes, ano;

    printf("Digite o dia atual: \n");
    scanf("%d",&dia);
    printf("Digite o mes atual: \n");
    scanf("%d%",&mes);
    printf("Digite o ano atual: \n");
    scanf("%d%",&ano);

    printf("A data atual e: %d\\%d\\%d\n\n", dia, mes, ano);

    system("pause");
    return 0;

}
